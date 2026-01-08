#ifndef HARDLEVEL_H
#define HARDLEVEL_H

#include <QDialog>
#include <QTimer>
#include "ZombieQuestionBank.h"
#include <QPushButton>
#include <QTextEdit>
#include <QLabel>
#include "customizewidget.h"
#include "score.h"
#include "difficultylevels.h"
#include "mediumlevel.h"

#include <QFile>
#include <QDir>
#include <QDebug>
#include <QTextStream>

namespace Ui {
class hardlevel;
}

class hardlevel : public QDialog
{
    Q_OBJECT

public:
    explicit hardlevel(QWidget *parent = nullptr);
    explicit hardlevel(QString str, QWidget *parent = nullptr);  // Modified constructor
    ~hardlevel();

    // Rest of the members remain the same
    int td;
    int curr;
    QString filename;
    int currQuestion;
    ZombieQuestionBank* questionBank;
    customizewidget* customized;
    score* feedBackUi ;
    DifficultyLevels* diff;
    int levelScore;
    MainWindow* newWindow;


    void setfeedbackUIWidgets();
    void setCompleteFeedbackUI();
    void updateScore();

    void progress(QPushButton* btn);
    void resetButton(QPushButton* btn);
    void progress(int currQuestionNum, QPushButton* currQuestionBtn);
    void controlOptionButton(QPushButton* btn1, QPushButton *btn2, QPushButton* btn3);
    void progress(int currQuestionNum,QPushButton* currQuestionBtn, QPushButton* btn);
    void setProgressButtonStyle(QPushButton* currQuestionBtn);
    void restartTimer();
    void setFailureUI();

    // UI getters remain the same
    QTextEdit* getQuestTextEdit();
    QPushButton* getNextBtn();
    QLabel* getTimerLabel();
    QPushButton* getQuestionBtn1();
    QPushButton* getQuestionBtn2();
    QPushButton* getQuestionBtn3();
    QPushButton* getQuestionBtn4();
    QPushButton* getQuestionBtn5();
    QPushButton* getQuestionBtn6();
    QPushButton* getQuestionBtn7();
    QPushButton* getQuestionBtn8();
    QPushButton* getOptionBtn1();
    QPushButton* getOptionBtn2();
    QPushButton* getOptionBtn3();
    QPushButton* getOptionBtn4();

public slots:
    void displayCurrentQuestion();
    void optionButtonClicked(QPushButton* btn);
    void displayTime();


private slots:
    void on_exitBtn_clicked();

private:
    Ui::hardlevel *ui;
    QTimer* time;
    QTimer* completeTime;
    void resizeEvent(QResizeEvent *event);
};

#endif // hardlevel_H


