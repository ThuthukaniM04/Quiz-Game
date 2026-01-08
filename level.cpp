#include "level.h"
#include "apollo.h"
#include <QDebug>
#include <QString>
#include <QMessageBox>
#include "global.h"
#include "score.h"
#include <QDateTime>




level::level(QString fname, QString level)
{
    levelScore = 0;
    curr = 1;
    filename = fname;
    currentLevel = level;
    currentQuestion = 0;

    newApollo =  new Apollo();
    mainpage = new MainWindow();


    if(level == "Question_Uno"){
        timeLength = 120;
        Global::instance().setValue(2);
    }
    else if(level == "Question_Dos"){
        timeLength = 240;
        Global:: instance().setValue(3);

    }
    else{
        timeLength = 360;
        Global:: instance().setValue(4);

    }


    //Instanciate
    questionBank = new questionbank();
    custom = new customizewidget();
    feedBackUI = new score();
    questionPage = new quizpage();

    //Start timer
    time = new QTimer(this);
    connect(time,SIGNAL(timeout()),this,SLOT(displayTime()));
    time->start(1000);

    //show the quizpage window
   questionPage-> showMaximized();


    //load questions from the xml file to the vector
    questionBank-> loadQuestionFromXML(filename);

    //Show the current question you on
    progress(curr, questionPage-> getQuestionButton1());
    
    //Displays current question
    displayCurrentQuestion();

    //---------------------------------------------------------------------------------------
    //if option 1 is selected
    connect(questionPage->getOptionButton1(),&QPushButton::clicked,this,[this](){

        //check if the option is correct
        optionButtonClicked(questionPage->getOptionButton1());

        //ensure that only one option is selected
        controlOptionBtn(questionPage->getOptionButton2(),questionPage->getOptionButton3());

        //select colour of current question (red or green)
        progress(questionPage->getOptionButton1());

    });

    //if option 2 is selected
    connect(questionPage-> getOptionButton2(),&QPushButton::clicked,this,[this](){

        //check if the option is correct
        optionButtonClicked(questionPage->getOptionButton2());

        //ensure that only one option is selected
        controlOptionBtn(questionPage->getOptionButton1(),questionPage->getOptionButton3());

        //select colour of current question (red or green)
        progress(questionPage->getOptionButton2());

    });

    //if option3 is selecetd
    connect(questionPage->getOptionButton3(),&QPushButton::clicked,this,[this](){

        //check if the option is correct
        optionButtonClicked(questionPage->getOptionButton3());

        //ensure that only one option is selected
        controlOptionBtn(questionPage->getOptionButton2(),questionPage->getOptionButton1());

        //select colour of current question (red or green)
        progress(questionPage->getOptionButton3());

    });
    //---------------------------------------------------------------------------------------

    //if next button is clicked
    connect(questionPage->getNextButton(), &QPushButton::clicked,this,[this](){
        curr+= 1;
        //Shows What question  you are currently in
        progress(curr,questionPage->getQuestionButton2());
        progress(curr,questionPage->getQuestionButton3());
        progress(curr,questionPage->getQuestionButton4());
        progress(curr,questionPage->getQuestionButton5());
        progress(curr,questionPage->getQuestionButton6());
        progress(curr,questionPage->getQuestionButton7());
        progress(curr,questionPage->getQuestionButton8());

        //
        setProgressButtonsStyle(questionPage-> getQuestionButton1());
        setProgressButtonsStyle(questionPage-> getQuestionButton2());
        setProgressButtonsStyle(questionPage-> getQuestionButton3());
        setProgressButtonsStyle(questionPage-> getQuestionButton4());
        setProgressButtonsStyle(questionPage-> getQuestionButton5());
        setProgressButtonsStyle(questionPage-> getQuestionButton6());
        setProgressButtonsStyle(questionPage-> getQuestionButton7());
        setProgressButtonsStyle(questionPage-> getQuestionButton8());

        //Check to see if you're at the end
        if(curr > 8){
            //Shows you feedback
            //for now just go to score page
            time->stop();
            if(levelScore > 4){

            //setfeedbackUIWidgets();
            Global::instance().addScore(levelScore);
            int completeTime;
            if(currentLevel=="Question_Uno"){
                completeTime = 120 - timeLength;
                Global::instance().addTime(completeTime);
            }
            else if(currentLevel=="Question_Dos"){
                completeTime = 240 - timeLength;
                Global::instance().addTime(completeTime);
            }
            else if(currentLevel=="Question_Tres"){
                completeTime = 360 - timeLength;
                Global::instance().addTime(completeTime);
            }


        }
            questionPage-> getNextButton()-> hide();
            questionPage-> getFinishButton()->show();

        }
        else{
            displayCurrentQuestion();
        }

    });

    //This is the finish at Question Page
    connect(questionPage->getFinishButton(),&QPushButton::clicked,this,[this](){
        if(levelScore > 4){
           questionPage->close();
            setfeedbackUIWidgets();}
        else{
            questionPage->close();
            setfailureUi();
        }
    });

    //This is the finish at the feedback / Score Ui
    connect(feedBackUI->getNextLevel(), &QPushButton:: clicked,this,[this](){
        if(feedBackUI->getScoreButton()->text().toInt()>4){
        if(Global::instance().getValue() == 2){
            unlockNextLevel(newApollo->getLevelUnoButton(),newApollo-> getLevelTresButton());
            newApollo->getLevelDosButton();
            newApollo->showPage(1);
            feedBackUI->close();

        }
        else if(Global:: instance().getValue() ==3){
            unlockNextLevel(newApollo-> getLevelUnoButton(),newApollo-> getLevelDosButton());
            newApollo->getLevelTresButton();
            newApollo->showPage(1);
            feedBackUI->close();
        }
        else if(Global:: instance().getValue() ==4){
            setMissionCompleteUI();
        }



        }

        else{
            if(Global::instance().getValue() == 2){
                unlockNextLevel(newApollo->getLevelDosButton(),newApollo-> getLevelTresButton());
                newApollo->getLevelUnoButton();

            }
            else if(Global:: instance().getValue() ==3){
                unlockNextLevel(newApollo-> getLevelUnoButton(),newApollo-> getLevelTresButton());
                newApollo->getLevelDosButton();
            }
            else if (Global::instance().getValue() == 4){
                unlockNextLevel(newApollo-> getLevelUnoButton(),newApollo-> getLevelDosButton());
                newApollo->getLevelTresButton();
            }


            newApollo->showPage(1);
            feedBackUI->close();
        }
        //Nah it's alright for now

    });

    //Quit level button clicked Once I've added it in
    //connect(questionPage->get)


}

level::~level()
{
    delete time;
    delete custom;
    delete questionBank;
}

void level::updateScore()
{
    levelScore++;
}

//This progress if for selecting color for the current question button
void level::progress(QPushButton *btn)
{
    progress(currentQuestion,questionPage-> getQuestionButton1(),btn);
    progress(currentQuestion,questionPage-> getQuestionButton2(),btn);
    progress(currentQuestion,questionPage-> getQuestionButton3(),btn);
    progress(currentQuestion,questionPage-> getQuestionButton4(),btn);
    progress(currentQuestion,questionPage-> getQuestionButton5(),btn);
    progress(currentQuestion,questionPage-> getQuestionButton6(),btn);
    progress(currentQuestion,questionPage-> getQuestionButton7(),btn);
    progress(currentQuestion,questionPage-> getQuestionButton8(),btn);


}

void level::resetButton(QPushButton *btn)
{
    btn->setEnabled(true);
    btn-> setStyleSheet(custom-> getEnabledButtonCustomStylesheet());
}

//This progress is to mark current question
void level::progress(int currQNum, QPushButton *currQBtn)
{
    if(currQNum == currQBtn->text().toInt()){
        currQBtn-> setStyleSheet(currQBtn->styleSheet()+"border: 3px solid blue;");
    }

}

void level::controlOptionBtn(QPushButton *btn1, QPushButton *btn2)
{
    btn1->  setEnabled(false);
    if(btn1->text() == questionBank->temp->answer){
        btn1->setStyleSheet(custom->getCorrectOptionCustomStylesheet());
    }
    else{
        btn1-> setStyleSheet(custom->getDisabledButtonCustomStylesheet());
    }

    btn2->setEnabled(false);
    if(btn2-> text()== questionBank -> temp-> answer){
        btn2-> setStyleSheet(custom->getCorrectOptionCustomStylesheet());
    }
    else{
        btn2-> setStyleSheet(custom-> getDisabledButtonCustomStylesheet());
    }


}

//Setect color of current question
void level::progress(int currQNum, QPushButton *currQBtn, QPushButton *btn)
{
    if(currQNum == currQBtn->text().toInt()){
        currQBtn-> setStyleSheet(btn-> styleSheet());
    }

}

void level::setProgressButtonsStyle(QPushButton *currQBtn)
{
    if(questionPage-> getOptionButton1()-> isEnabled()&& questionPage-> getOptionButton2()-> isEnabled() && questionPage-> getOptionButton3()-> isEnabled()){
        if((curr-1) == currQBtn-> text().toInt()){
            currQBtn-> setStyleSheet(custom->getWrongOptionCustomStylesheet());
        }
    }

}

void level::restartTimer()
{
    timeLength = (currentLevel == "Queation_Uno") ? 160 : ((currentLevel == "Question_Dos") ? 240 : 360);
}

void level::setfeedbackUIWidgets()
{
    feedBackUI->showMaximized();
    QString strng = QString::number(levelScore);
    feedBackUI->getScoreButton()->setText(strng);
    feedBackUI->getCompletedLevelLabel()->setText(currentLevel);
    int completeTime = 0;

    if(currentLevel=="Question_Uno"){
        completeTime = 120 - timeLength;
        int minutes = completeTime/60;
        int seconds = completeTime%60;

        feedBackUI->getLevelTimeLabel()->setText(QString("%1: %2").arg(minutes,2, 10, QChar('0')).arg(seconds,2, 10,QChar('0')));

    }
    else if(currentLevel=="Question_Dos"){
        completeTime = 240 - timeLength;
        int minutes = completeTime/60;
        int seconds = completeTime%60;

        feedBackUI->getLevelTimeLabel()->setText(QString("%1: %2").arg(minutes,2, 10, QChar('0')).arg(seconds,2, 10,QChar('0')));

    }
    else if(currentLevel=="Question_Tres"){
        completeTime = 360 - timeLength;
        int minutes = completeTime/60;
        int seconds = completeTime%60;

        feedBackUI->getLevelTimeLabel()->setText(QString("%1: %2").arg(minutes,2, 10, QChar('0')).arg(seconds,2, 10,QChar('0')));
    }

    if(levelScore>=7){
        feedBackUI->getfeedbackMessage()->setPlainText("Space ship is in perfect condition, avoid damage and you will safely return "
                                                       "Astronauts home "+Global::instance().getStringValue());
    }
    else if(levelScore>=4){
        feedBackUI->getfeedbackMessage()->setPlainText("You're almost there "+ Global::instance().getStringValue());
    }

   /* else{
        feedBackUI->getfeedbackMessage()->setPlainText("Better luck next time "+ Global::instance().getStringValue());
    }*/

    if(feedBackUI->getCompletedLevelLabel()->text()=="Question_Tres"){

        int myNum = Global::instance().getTime();

        int minutes2 = myNum/60;
        int seconds2 = myNum%60;

        QString timeString = QString("%1: %2").arg(minutes2,2, 10, QChar('0')).arg(seconds2,2, 10,QChar('0'));

        QDateTime currentDateTime = QDateTime::currentDateTime();
        QFile File("ScoreData");
        if(File.open(QIODevice::Append| QIODevice::Text)){
            QTextStream stream(&File);
            stream << Global::instance().getStringValue()<<","<<Global::instance().getTotalScore()<<","<<timeString<<","<<currentDateTime.toString()<<"\n";
        }
        File.close();
    }

}

void level::setfailureUi()
{
    feedBackUI->showMaximized();

    QString strng = QString::number(levelScore);
    feedBackUI->getScoreButton()->setText(strng);

    feedBackUI->getCompletedLevelLabel()->setText(currentLevel);
    int completeTime = 0;

    if(currentLevel=="Question_Uno"){
        completeTime = 120 - timeLength;
        int minutes = completeTime/60;
        int seconds = completeTime%60;

        feedBackUI->getLevelTimeLabel()->setText(QString("%1: %2").arg(minutes,2, 10, QChar('0')).arg(seconds,2, 10,QChar('0')));

    }
    else if(currentLevel=="Question_Dos"){
        completeTime = 240 - timeLength;
        int minutes = completeTime/60;
        int seconds = completeTime%60;

        feedBackUI->getLevelTimeLabel()->setText(QString("%1: %2").arg(minutes,2, 10, QChar('0')).arg(seconds,2, 10,QChar('0')));

    }
    else if(currentLevel=="Question_Tres"){
        completeTime = 360 - timeLength;
        int minutes = completeTime/60;
        int seconds = completeTime%60;

        feedBackUI->getLevelTimeLabel()->setText(QString("%1: %2").arg(minutes,2, 10, QChar('0')).arg(seconds,2, 10,QChar('0')));
    }


    feedBackUI->getfeedbackMessage()->setPlainText("Mission Failed, Space ship severely damaged, Failed to return Astronauts home.Replay or Quit Game: "+Global::instance().getStringValue());



}

//Self explanitory
void level::unlockNextLevel(QPushButton *btn1, QPushButton *btn2)
{
    btn1-> setEnabled(false);
    btn1-> setStyleSheet(customizewidget:: getDisabledButtonCustomStylesheet());

    btn2-> setEnabled(false);
    btn2-> setStyleSheet(customizewidget:: getDisabledButtonCustomStylesheet());

}

void level::setMissionCompleteUI()
{
    int myNum = Global::instance().getTime();

    int minutes2 = myNum/60;
    int seconds2 = myNum%60;

    QString timeString = QString("%1: %2").arg(minutes2,2, 10, QChar('0')).arg(seconds2,2, 10,QChar('0'));

    feedBackUI->getCompletedLevelLabel()->setText("Mission Complete");
    feedBackUI->getfeedbackMessage()->setPlainText("You have completed the mission, Astronauts safely returned home");
    feedBackUI->getScoreButton()->setText(QString::number(Global::instance().getTotalScore()));
    feedBackUI->getLevelTimeLabel()->setText(timeString);
    feedBackUI->getScoreLabel()->setText("Overall Score");
    feedBackUI->getTimeLabel()->setText("Overall Time");
}

void level::displayCurrentQuestion()
{
    //hide finish button
    questionPage-> getFinishButton()-> hide();

    questionPage-> getLevelLabel()->setText(currentLevel);
    //questionPage->feed Score needs to go here

    //assign the current question to temp
    questionBank-> temp = questionBank-> getRandomQuestion();

    //Show the current question on the text area
    questionPage-> getQuestionArea()-> setPlainText(questionBank->temp->text);

    //set the option buttons back to default
    resetButton(questionPage->getOptionButton1());
    resetButton(questionPage->getOptionButton2());
    resetButton(questionPage->getOptionButton3());

    if(questionBank->temp->options.size()==2){

        //hide the third option button if theres only two options in the options inside questionbank
        questionPage-> getOptionButton3()-> hide();

        //display options for the current t/f question
        questionPage-> getOptionButton1()-> setText(questionBank->temp->options.at(0));
        questionPage-> getOptionButton2()-> setText(questionBank->temp->options.at(1));
    }
    else if(questionBank->temp->options.size() == 3){

        //Show all option buttons if there are three option inside of option in questionbank
        //show the previously hidden button
        questionPage->getOptionButton3()-> show();

        //display options for the current question
        questionPage->  getOptionButton1()-> setText(questionBank->temp->options.at(0));
        questionPage->  getOptionButton2()-> setText(questionBank->temp->options.at(1));
        questionPage->  getOptionButton3()-> setText(questionBank->temp->options.at(2));
    }

    currentQuestion+= 1;



}

void level::optionButtonClicked(QPushButton *btn)
{
    if(btn->text() == questionBank->temp->answer){
        btn->setStyleSheet(custom-> getCorrectOptionCustomStylesheet());
        //score will go here
        updateScore();
    }
    else{
        btn-> setStyleSheet(custom->getWrongOptionCustomStylesheet());
    }

}

void level::displayTime()
{

    if(timeLength > 0){
        timeLength--;
        int minutes = timeLength/60;
        int seconds = timeLength%60;

        questionPage-> getTimerLabel()-> setText(QString("%1: %2").arg(minutes,2, 10, QChar('0'))
                                                   .arg(seconds,2, 10,QChar('0')));
    }


    else{
        questionPage-> getTimerLabel()-> setText("Time's up!");

        if(levelScore > 4){
            //setfeedbackUIWidgets();
            Global::instance().addScore(levelScore);
            int completeTime;
            if(currentLevel=="Question_Uno"){
                completeTime = 120 - timeLength;
                Global::instance().addTime(completeTime);
            }
            else if(currentLevel=="Question_Dos"){
                completeTime = 240 - timeLength;
                Global::instance().addTime(completeTime);
            }
            else if(currentLevel=="Question_Tres"){
                completeTime = 360 - timeLength;
                Global::instance().addTime(completeTime);
            }


            questionPage->close();
            setfeedbackUIWidgets();
         restartTimer();}
        else{

            questionPage->close();
            setfailureUi();
            restartTimer();
        }

    }
}



