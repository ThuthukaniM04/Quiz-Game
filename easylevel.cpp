#include "easylevel.h"
#include "ui_easylevel.h"
#include <QDebug>
#include "score.h"
#include "global.h"
#include "customizewidget.h"
#include "mainwindow.h"
#include <QString>
#include "backgroundsetter.h"

easylevel::easylevel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::easylevel)
{
    ui->setupUi(this);
}

//QString fname = "easy_quiz.xml";

easylevel::easylevel(QString str, QWidget *parent)
    :QDialog(parent), ui(new Ui::easylevel){

    ui->setupUi(this);

    filename = str;//::fname;
    curr = 1;
    currQuestion = 0;
    td = 240;
    levelScore = 0;

    questionBank = new ZombieQuestionBank();
    customized = new customizewidget();
    feedBackUi = new score();
    diff = new DifficultyLevels();

    time = new QTimer(this);
    connect(time,SIGNAL(timeout()),this, SLOT(displayTime()));
    time ->start(1000);

    //Load questions int the vector
    questionBank->loadQuestion(filename);


    progress(curr,getQuestionBtn1());

    //Display first question

    displayCurrentQuestion();


    //When option button clicked
    //==================================================================================
    //When option 1 is clicked
    connect(getOptionBtn1(),&QPushButton::clicked,this,[this](){
        //Check if correct
        optionButtonClicked(getOptionBtn1());

        //Ensures that one option is clicked
        controlOptionButton(getOptionBtn2(),getOptionBtn3(),getOptionBtn4());

        //Select colour
        progress(getOptionBtn1());
    });

    //When option 2 is clicked
    connect(getOptionBtn2(),&QPushButton::clicked,this,[this](){
        //Check if correct
        optionButtonClicked(getOptionBtn2());

        //Ensures that one option is clicked
        controlOptionButton(getOptionBtn1(),getOptionBtn3(),getOptionBtn4());

        //Select colour
        progress(getOptionBtn2());
    });

    //When option 3 is clicked
    connect(getOptionBtn3(),&QPushButton::clicked,this,[this](){
        //Check if correct
        optionButtonClicked(getOptionBtn3());

        //Ensures that one option is clicked
        controlOptionButton(getOptionBtn1(),getOptionBtn2(),getOptionBtn4());

        //Select colour
        progress(getOptionBtn3());
    });

    //When option 4 is clicked
    connect(getOptionBtn4(),&QPushButton::clicked,this,[this](){
        //Check if correct
        optionButtonClicked(getOptionBtn4());

        //Ensures that one option is clicked
        controlOptionButton(getOptionBtn1(),getOptionBtn2(),getOptionBtn3());

        //Select colour
        progress(getOptionBtn4());
    });

    //When next button is clicked
    //Next level buttons
    connect(feedBackUi->getNextLevel(), &QPushButton:: clicked,this,[this](){
        if(feedBackUi->getScoreButton()->text().toInt() > 4){
            diff->getEasyLeveBtn()->setStyleSheet(customizewidget:: getDisabledButtonCustomStylesheet());
            diff->getEasyLeveBtn()->setEnabled(false);

            diff->getHardLeveBtn()->setStyleSheet(customizewidget:: getDisabledButtonCustomStylesheet());
            diff->getHardLeveBtn()->setEnabled(false);
        }
        else{
            diff->getMediumLeveBtn()->setStyleSheet(customizewidget:: getDisabledButtonCustomStylesheet());
            diff->getMediumLeveBtn()->setEnabled(false);

            diff->getHardLeveBtn()->setStyleSheet(customizewidget:: getDisabledButtonCustomStylesheet());
            diff->getHardLeveBtn()->setEnabled(false);

        }
        diff->showMaximized();
        feedBackUi->close();
    });

    connect(getNextBtn(),&QPushButton::clicked,this,[this](){
        curr +=1;
        progress(curr,getQuestionBtn2());
        progress(curr,getQuestionBtn3());
        progress(curr,getQuestionBtn4());
        progress(curr,getQuestionBtn5());
        progress(curr,getQuestionBtn6());
        progress(curr,getQuestionBtn7());
        progress(curr,getQuestionBtn8());

        setProgressButtonStyle(getQuestionBtn1());
        setProgressButtonStyle(getQuestionBtn2());
        setProgressButtonStyle(getQuestionBtn3());
        setProgressButtonStyle(getQuestionBtn4());
        setProgressButtonStyle(getQuestionBtn5());
        setProgressButtonStyle(getQuestionBtn6());
        setProgressButtonStyle(getQuestionBtn7());
        setProgressButtonStyle(getQuestionBtn8());

        if(curr > 8){
            time->stop();
            this->close();

            if(levelScore > 4){
                //setfeedbackUIWidgets();
                Global::instance().addEasyScore(levelScore);
                int completeTime;
                completeTime = 240 - td;
                Global::instance().addEasyTime(completeTime);
                setfeedbackUIWidgets();
            }
            else{
                setFailureUI();
            }
        }
        else{
            displayCurrentQuestion();
        }

    });


}
easylevel::~easylevel()
{
    delete ui;
    delete time;
    delete questionBank;
    delete customized;
}

void easylevel::displayCurrentQuestion(){

    questionBank->temp = questionBank->getRandomQuestion();//Assign the current question to a variable name called "temp" in QuestionBank class
    getQuestTextEdit()->setText(questionBank->temp->text);//Display current question to the TextEdit

    //set the option buttons back to defualt
    resetButton(getOptionBtn1());
    resetButton(getOptionBtn2());
    resetButton(getOptionBtn3());
    resetButton(getOptionBtn4());

    if(questionBank->temp->options.size()==2){
        //hide two buttons
        getOptionBtn3()->hide();
        getOptionBtn4()->hide();

        //Display options
        getOptionBtn1()->setText(questionBank->temp->options.at(0));
        getOptionBtn2()->setText(questionBank->temp->options.at(1));
    }

    else if(questionBank->temp->options.size()==4){
        //Show the buttons that were prev hidden
        getOptionBtn3()->show();
        getOptionBtn4()->show();

        //display options
        getOptionBtn1()->setText(questionBank->temp->options.at(0));
        getOptionBtn2()->setText(questionBank->temp->options.at(1));
        getOptionBtn3()->setText(questionBank->temp->options.at(2));
        getOptionBtn4()->setText(questionBank->temp->options.at(3));
    }
    currQuestion+=1;

}

void easylevel::progress(QPushButton* btn){
    progress(currQuestion,getQuestionBtn1(),btn);
    progress(currQuestion,getQuestionBtn2(),btn);
    progress(currQuestion,getQuestionBtn3(),btn);
    progress(currQuestion,getQuestionBtn4(),btn);
    progress(currQuestion,getQuestionBtn5(),btn);
    progress(currQuestion,getQuestionBtn6(),btn);
    progress(currQuestion,getQuestionBtn7(),btn);
    progress(currQuestion,getQuestionBtn8(),btn);
}

//Ensure that one option is selected
void easylevel::controlOptionButton(QPushButton* btn1,QPushButton* btn2,QPushButton* btn3){

    btn1->setEnabled(false);
    if(btn1->text()==questionBank->temp->correctOption)
        btn1->setStyleSheet(customized->getCorrectOptionCustomStylesheet());
    else
        btn1->setStyleSheet(customized->getDisabledButtonCustomStylesheet());

    btn2->setEnabled(false);
    if(btn2->text()==questionBank->temp->correctOption)
        btn2->setStyleSheet(customized->getCorrectOptionCustomStylesheet());
    else
        btn2->setStyleSheet(customized->getDisabledButtonCustomStylesheet());

    btn3->setEnabled(false);
    if(btn3->text()==questionBank->temp->correctOption)
        btn3->setStyleSheet(customized->getCorrectOptionCustomStylesheet());
    else
        btn3->setStyleSheet(customized->getDisabledButtonCustomStylesheet());

}


//select colour of current question label/button (3 parameters)
void easylevel::progress(int currQuestionNum,QPushButton* currQuestionBtn,QPushButton *btn){
    if(currQuestionNum == currQuestionBtn->text().toInt())
        currQuestionBtn->setStyleSheet(btn->styleSheet());
}

void easylevel::setProgressButtonStyle(QPushButton* currQuestionBtn){
    if(getOptionBtn1()->isEnabled() && getOptionBtn2()->isEnabled() && getOptionBtn3()->isEnabled() && getOptionBtn4()->isEnabled()){
        if((curr-1) == currQuestionBtn->text().toInt()){
            currQuestionBtn->setStyleSheet(customized->getWrongOptionCustomStylesheet());
        }
    }
}

void easylevel::restartTimer(){
    td = 240;
}

void easylevel::setfeedbackUIWidgets()
{
    feedBackUi->showMaximized();

    QString string = QString::number(levelScore);

    feedBackUi->getScoreButton()->setText(string);
    feedBackUi->getCompletedLevelLabel()->setText("Easy Level");
    int completeTime = 0;

    completeTime = 240 - td;

    int minutes = completeTime/60;
    int seconds = completeTime%60;

    feedBackUi->getLevelTimeLabel()->setText(QString("%1: %2").arg(minutes,2, 10, QChar('0')).arg(seconds,2, 10,QChar('0')));

    if(levelScore>=7){
        feedBackUi->getfeedbackMessage()->setPlainText("Wow, you're a genius,your answers helped Alex "
                                                       + Global::instance().getStringValue());
    }
    else if(levelScore>=4){
        feedBackUi->getfeedbackMessage()->setPlainText("Alex lives for now ,thanks to you "+ Global::instance().getStringValue());
    }
}

void easylevel::updateScore()
{
    levelScore++;
}

void easylevel::setFailureUI()
{
    feedBackUi->showMaximized();

    QString string = QString::number(levelScore);

    feedBackUi->getScoreButton()->setText(string);
    feedBackUi->getCompletedLevelLabel()->setText("Easy Level");
    int completeTime = 0;

    completeTime = 240 - td;

    int minutes = completeTime/60;
    int seconds = completeTime%60;

    feedBackUi->getLevelTimeLabel()->setText(QString("%1: %2").arg(minutes,2, 10, QChar('0')).arg(seconds,2, 10,QChar('0')));
    feedBackUi->getfeedbackMessage()->setPlainText("You failed to rescue Alex from the undead "+ Global::instance().getStringValue());

}

void easylevel::resetButton(QPushButton *btn)
{
    btn->setEnabled(true);
    btn->setStyleSheet(customized->getEnabledButtonCustomStylesheet());
}

//mark current question(2 parameters)
void easylevel::progress(int currentQuestionNum, QPushButton *currQuestionBtn){
    if(currentQuestionNum == currQuestionBtn->text().toInt()){
        currQuestionBtn->setStyleSheet(currQuestionBtn->styleSheet()+"border: 3px solid blue;");
    }
}

/*slots for the options buttons --> this method below provide the same functionality as 'validateAnswer'
* method in our uml diagram
*/
void easylevel::optionButtonClicked(QPushButton *btn){
    if(btn->text() == questionBank->temp->correctOption){
        btn->setStyleSheet(customized->getCorrectOptionCustomStylesheet());
        updateScore();

    }
    else{
        btn->setStyleSheet(customized->getWrongOptionCustomStylesheet());
    }

}


void easylevel::displayTime(){
    if(td > 0){
        td--;
        int minutes = td/60;
        int seconds = td%60;

        getTimerLabel()-> setText(QString("%1: %2").arg(minutes,2, 10, QChar('0')).arg(seconds,2, 10,QChar('0')));
    }


    else{
        this->close();
        if(levelScore > 4){
            getTimerLabel()-> setText("Time's up!");
            //setfeedbackUIWidgets();
            Global::instance().addEasyScore(levelScore);
            int completeTime;
            completeTime = 240 - td;
            Global::instance().addEasyTime(completeTime);
            setfeedbackUIWidgets();
        }
        else{
            setFailureUI();
        }
        restartTimer();

    }

}

QTextEdit *easylevel::getQuestTextEdit(){
    return ui->textEdit;
}

QPushButton *easylevel::getNextBtn(){
    return ui->nextBtn;
}

QPushButton *easylevel::getOptionBtn1(){
    return ui->optionBtn1;
}

QPushButton *easylevel::getOptionBtn2(){
    return ui->optionBtn2;
}

QPushButton *easylevel::getOptionBtn3(){
    return ui->optionBtn3;
}

QPushButton *easylevel::getOptionBtn4(){
    return ui->optionBtn4;
}

QPushButton *easylevel::getQuestionBtn1(){
    return ui->btn1;
}

QPushButton *easylevel::getQuestionBtn2(){
    return ui->btn2;
}

QPushButton *easylevel::getQuestionBtn3(){
    return ui->btn3;
}

QPushButton *easylevel::getQuestionBtn4(){
    return ui->btn4;
}

QPushButton *easylevel::getQuestionBtn5(){
    return ui->btn5;
}

QPushButton *easylevel::getQuestionBtn6(){
    return ui->btn6;
}

QPushButton *easylevel::getQuestionBtn7(){
    return ui->btn7;
}

QPushButton *easylevel::getQuestionBtn8(){
    return ui->btn8;
}

QLabel *easylevel::getTimerLabel(){
    return ui->timerLabel;
}



void easylevel::on_exitBtn_clicked()
{
    this -> close();
    MainWindow *newWindow = new MainWindow();

    newWindow -> navigateToPage(1);
}

void easylevel::resizeEvent(QResizeEvent *event)
{
    backgroundsetter setter;
    QWidget::resizeEvent(event);
    setter.setBackgroundImage(this,":/resources/img/z3.jpg");
}

