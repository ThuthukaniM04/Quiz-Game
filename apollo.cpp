#include "apollo.h"
#include "ui_apollo.h"
#include "customizewidget.h"
#include "mainwindow.h"
#include "level.h"
#include <QPlainTextEdit>
#include <QTimer>
#include <QTextCursor>
#include "viewscorespage.h"
#include <QStandardItemModel>
#include "global.h"

#include "backgroundsetter.h"


Apollo::Apollo(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Apollo)
    , currentCharIndex(0)
    ,remainingTime(120)

{
    ui->setupUi(this);
    homePage = new MainWindow();
    //Initializing the QTimer
   // timer = new QTimer(this);
   // connect(timer, &QTimer::timeout,this,&Apollo:: updateCountDown);


    //This is for the intro message thingy
    message = "In order for the astronomers to safely return home to Earth, they need your help. By clicking the 'Accept' button, you agree to take on the mission to rescue them and bring them back from the red planet, Mars. The mission consists of three levels, each with a series of questions. As you progress, the questions become increasingly difficult. Only the bravest and most courageous will succeed in this mission. Get ready for an adventure full of excitement, emotions, and action!";
    typingTimer = new QTimer(this);
    connect(typingTimer, &QTimer::timeout, this, &Apollo::onTypingTimeout);
    typingTimer->start(50);

    ui->plainTextEdit->clear();
}

Apollo::~Apollo()
{
    delete ui;
}

QPushButton *Apollo::getLevelUnoButton()
{
    return ui->levelUnoBtn;
}

QPushButton *Apollo::getLevelDosButton()
{

    return ui->levelDosBtn;
}

QPushButton *Apollo::getLevelTresButton()
{

    return ui->levelTresBtn;
}


void Apollo::onTypingTimeout()
{
    if (currentCharIndex < message.length()) {
        QString currentChar = message[currentCharIndex];
        ui->plainTextEdit->moveCursor(QTextCursor::End);  // Move cursor to the end
        ui->plainTextEdit->insertPlainText(currentChar);  // Insert the current character
        currentCharIndex++;  // Move to the next character
    } else {
        typingTimer->stop();  // Stop the timer when the message is fully typed
    }
}

void Apollo::showPage(int index)
{
    ui->AstackedWidget  -> setCurrentIndex(index);
    this->showMaximized();
}

void Apollo::resizeEvent(QResizeEvent *event)
{
    backgroundsetter setter;
    QWidget::resizeEvent(event);
    setter.setBackgroundImage(this,":/resources/img/a1.jpg");
}



void Apollo::on_pushButton_7_clicked()
{
    close();
}


void Apollo::on_pushButton_6_clicked()
{
    this -> close();
    MainWindow *newWindow = new MainWindow();
    newWindow-> showMaximized();
    newWindow -> navigateToPage(1);

}


void Apollo::on_acceptBtn_clicked()
{
  \


    getLevelDosButton()-> setStyleSheet(customizewidget::getDisabledButtonCustomStylesheet());
    getLevelDosButton()-> setEnabled(false);

    getLevelTresButton()-> setStyleSheet(customizewidget:: getDisabledButtonCustomStylesheet());
    getLevelTresButton()->setEnabled(false);
    //getLevelTresButton()-> setStyleSheet(customizewidget:: getDisabledButtonCustomStylesheet());

    ui -> AstackedWidget -> setCurrentIndex(1);
}


void Apollo::on_levelUnoBtn_clicked()
{
   // This is where you'll create the Level Class
    level *uno = new level("Question_Uno.xml","Question_Uno");
   // this->hide();
    this->close();
    uno->show();
    uno->close();


}

void Apollo::on_timeEdit_userTimeChanged(const QTime &time)
{

}

void Apollo::on_levelDosBtn_clicked()
{
    level *dos = new level("Question_Dos.xml", "Question_Dos");
    this->close();
    dos->show();
    dos->close();


}

void Apollo::on_levelTresBtn_clicked()
{
    level *tres = new level("Question_Tres.xml","Question_Tres");
    this->close();
    tres->show();
    tres->close();

}


void Apollo::on_scoreBtn_clicked()
{
    ViewScoresPage * scorePage = new ViewScoresPage();
    this->close();

    //This is where you play with the controls
    scoreModel = new QStandardItemModel(scorePage);


    scorePage->getTableView()->setModel(scoreModel);//->setModel(scoreModel);
    scorePage->loadScoreData("ScoreData",scoreModel);
    scorePage->getHeaderLbl()->setText("Apollo Score Data");

    scorePage->getTableView()->resizeColumnsToContents();

    //Sort by SCore descending
    scorePage->getTableView()->sortByColumn(1, Qt::DescendingOrder);


    scorePage->showMaximized();
}


void Apollo::on_homeBtn_clicked()
{
    Global::instance().resetApolloLevels();
    this->close();
    homePage-> navigateToPage(1);

}

