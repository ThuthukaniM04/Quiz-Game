#include "zombiestoryline.h"
#include "ui_zombiestoryline.h"
#include "difficultylevels.h"
#include "customizewidget.h"
#include "viewscorespage.h"
#include "mainwindow.h"
#include "backgroundsetter.h"


ZombieStoryline::ZombieStoryline(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ZombieStoryline)
{
    ui->setupUi(this);
}

ZombieStoryline::~ZombieStoryline()
{
    delete ui;
}

void ZombieStoryline::on_missionBtn_clicked()
{
    DifficultyLevels* diff = new DifficultyLevels();
    this->hide();
    this->close();
    diff->getMediumLeveBtn()->setStyleSheet(customizewidget::getDisabledButtonCustomStylesheet());
    diff->getMediumLeveBtn()->setEnabled(false);

    diff->getHardLeveBtn()->setStyleSheet(customizewidget::getDisabledButtonCustomStylesheet());
    diff->getHardLeveBtn()->setEnabled(false);
    diff->showMaximized();




}


void ZombieStoryline::on_scoreBtn_clicked()
{
    //This is where the magic happens
    ViewScoresPage * scorePage = new ViewScoresPage();
    this->close();

    //This is where you play with the controls
    scoreModel = new QStandardItemModel(scorePage);


    scorePage->getTableView()->setModel(scoreModel);//->setModel(scoreModel);
    scorePage->loadScoreData("ZombieScoreData.txt",scoreModel);
    scorePage->getHeaderLbl()->setText("Zombie Score Data");
    scorePage->getTableView()->resizeColumnsToContents();


    //Sort by SCore descending
    scorePage->getTableView()->sortByColumn(1, Qt::DescendingOrder);


    scorePage->showMaximized();

}


void ZombieStoryline::on_backBtn_clicked()
{
    this -> close();
    MainWindow *newWindow = new MainWindow();

    newWindow -> navigateToPage(1);
}


void ZombieStoryline::on_quitBtn_clicked()
{
    this->close();
}

void ZombieStoryline::resizeEvent(QResizeEvent *event)
{
    backgroundsetter setter;
    QWidget::resizeEvent(event);
    setter.setBackgroundImage(this,":/resources/img/zombie.jpg");
}

