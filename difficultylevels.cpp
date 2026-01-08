#include "difficultylevels.h"
#include "ui_difficultylevels.h"
#include "zombiestoryline.h"
#include "easylevel.h"
#include "mediumlevel.h"
#include "hardlevel.h"
#include "backgroundsetter.h"
#include "global.h"

DifficultyLevels::DifficultyLevels(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DifficultyLevels)
{
    ui->setupUi(this);
}

DifficultyLevels::~DifficultyLevels()
{
    delete ui;
}

QPushButton *DifficultyLevels::getEasyLeveBtn()
{
    return ui->easyBtn;
}

QPushButton *DifficultyLevels::getMediumLeveBtn()
{
    return ui->mediumBtn;

}

QPushButton *DifficultyLevels::getHardLeveBtn()
{
    return ui->hardBtn;
}

void DifficultyLevels::on_easyBtn_clicked()
{
    easylevel* easy = new easylevel("easy_quiz.xml");
    this->hide();
    //easy->show();
    easy->showMaximized();

}


void DifficultyLevels::on_mediumBtn_clicked()
{
    mediumlevel* medium = new mediumlevel("medium_quiz.xml");
    this->hide();
    //medium->show();
    medium->showMaximized();

}


void DifficultyLevels::on_hardBtn_clicked()
{
    hardlevel* hard = new hardlevel("hard_quiz.xml");
    this->hide();
    //hard->show();
    hard->showMaximized();

}


void DifficultyLevels::on_quitBtn_clicked()
{
    this->close();
}

void DifficultyLevels::resizeEvent(QResizeEvent *event)
{
    backgroundsetter setter;
    QWidget::resizeEvent(event);
    setter.setBackgroundImage(this,":/resources/img/z5.jpg");
}


void DifficultyLevels::on_backBtn_clicked()
{
    Global::instance().resetAllLevels();
    ZombieStoryline* storyLine = new ZombieStoryline();
    this->hide();
    storyLine->showMaximized();
}


