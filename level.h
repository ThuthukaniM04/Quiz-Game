#ifndef LEVEL_H
#define LEVEL_H

#include <QString>
#include <QMainWindow>
#include <QPushButton>
#include <QTimer>

#include "apollo.h"
#include "questionbank.h"
#include "quizpage.h"
#include "customizewidget.h"
#include "score.h"
#include "mainwindow.h"



#include <QFile>
#include <QDir>
#include <QDebug>
#include <QTextStream>

class level: public QMainWindow
{
    Q_OBJECT
public:
    explicit level(QString fname, QString level);
    ~level();

    int timeLength;
    int curr;
    //Score goes here
    int levelScore ;

    QString filename;
    int currentQuestion;
    QString currentLevel;

    Apollo* newApollo;
    questionbank* questionBank;
    quizpage* questionPage;
    customizewidget* custom;
    score* feedBackUI;
    MainWindow* mainpage;

    void updateScore();
    void displayScore();
    void progress(QPushButton* btn);
    void resetButton(QPushButton* btn);
    void progress(int currQNum,QPushButton* currQBtn);
    void controlOptionBtn(QPushButton* btn1,QPushButton* btn2);
    void progress(int currQNum,QPushButton* currQBtn,QPushButton* btn);
    void setProgressButtonsStyle(QPushButton* currQBtn);
    void restartTimer();
    void setfeedbackUIWidgets(); //showing if you passed or failed and giving score if it's the last level
    void setfailureUi();
    void unlockNextLevel(QPushButton *btn1,QPushButton *btn2);
    void setMissionCompleteUI();

public slots:
    void displayCurrentQuestion();
    void optionButtonClicked(QPushButton* btn);
    void displayTime();

private:
      QTimer* time;
    //QTimer* completeTime;
};

#endif // LEVEL_H
