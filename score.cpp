#include "score.h"
#include "ui_score.h"
#include "mainwindow.h"
#include "backgroundsetter.h"

score::score(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::score)
{
    ui->setupUi(this);
}

score::~score()
{
    delete ui;
   delete mainpage;


}

QLabel *score::getCompletedLevelLabel()
{
    return  ui->level_lbl;
}

QLabel *score::getScoreLabel()
{
    return ui->label;
}

QLabel *score::getTimeLabel()
{
    return ui->label_2;
}

QPlainTextEdit *score::getfeedbackMessage()
{
    return ui->feedbackArea;
}

QPushButton *score::getNextLevel()//finish button
{
    return ui->finishBtn;
}

QPushButton *score::getLevelTimeLabel()
{
    return ui->timeBtn;
}

/*QPushButton *score::getReplayButton()
{
    return ui->replayBtn;
}*/

QPushButton *score::getScoreButton()
{
    return ui-> scoreBtn;

}

void score::on_finishBtn_clicked()
{
    mainpage = new MainWindow();
    if(getCompletedLevelLabel()->text() =="Mission Complete"){
        this->close();
        mainpage->navigateToPage(1);
    }
    else if(getCompletedLevelLabel()->text() == "Mission Complete, Alex Survived"){
        this->close();
        mainpage->navigateToPage(1);

    }

}

void score::resizeEvent(QResizeEvent *event)
{
    backgroundsetter setter;
    QWidget::resizeEvent(event);
    setter.setBackgroundImage(this,":/resources/img/m1.jpeg");
}

