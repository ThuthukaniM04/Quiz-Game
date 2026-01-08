#include "viewscorespage.h"
#include "ui_viewscorespage.h"
#include <QStandardItemModel>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include "global.h"
#include "apollo.h"
#include "zombiestoryline.h"

ViewScoresPage::ViewScoresPage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ViewScoresPage)
    //, scoreModel(new QStandardItemModel(this))
{
    ui->setupUi(this);
  //  ui->tableView->setModel(scoreModel);
    //loadScoreData();
}

ViewScoresPage::~ViewScoresPage()
{
    delete ui;

}



QPushButton *ViewScoresPage::getBackBtn()
{
    return ui->backBtn;
}

QTableView *ViewScoresPage::getTableView()
{
    return ui->tableView;
}

QComboBox *ViewScoresPage::getSortComboBox()
{
    return ui->comboBox_2;
}



QLabel *ViewScoresPage::getHeaderLbl()
{
    return ui->headerLbl;
}

void ViewScoresPage::loadScoreData(QString ScoreData, QStandardItemModel *scoreModel )
{
    QString filename = ScoreData;
    QFile file(filename);
    if(!file.open(QIODevice::ReadOnly| QIODevice::Text)){
        QMessageBox::critical(this,"Error","Could not open ScoreData.txt");
        return;
    }

    QTextStream in(&file);


    scoreModel->clear();//clear existing data
    scoreModel->setHorizontalHeaderLabels({"Player Name","Score","Time","Date"});

    while(!in.atEnd()){
        QString line = in.readLine().trimmed();
        if(line.isEmpty())continue;//Just incase there are empty lines skip them

        QStringList fields = line.split(',');

        if(fields.size() == 3){
            fields.append("N/A");
        }

        //Validate 4 columns
        if(fields.size() !=4){
            qDebug() << "line skiped if size != 4"<<line;
            continue;
        }

        //Columns entries
        QList<QStandardItem*> rowItems;

        //Player Name column 0
        rowItems << new QStandardItem(fields[0].trimmed());

        //Score column 1
        bool isInt;
        int score = fields[1].trimmed().toInt(&isInt);
        if(!isInt) score = 0; //if score is not an int set 0 as default
        rowItems << new QStandardItem(QString::number(score));

        //Time column 2 Need to improve this and convert it some How
        rowItems << new QStandardItem(fields[2].trimmed());

        //Date column 3
        rowItems << new QStandardItem(fields[3].trimmed());

        scoreModel-> appendRow(rowItems);

    }
    file.close();

    //Clean format

}

void ViewScoresPage::filterByName()
{
    QString filename = "ScoreData";
    QFile file(filename);
    if(!file.open(QIODevice::ReadOnly| QIODevice::Text)){
        QMessageBox::critical(this,"Error","Could not open ScoreData.txt");
        return;
    }

    QTextStream in(&file);

    QStandardItemModel* scoreModel = new QStandardItemModel(this);

    this->getTableView()->setModel(scoreModel);

    scoreModel->clear();//clear existing data
    scoreModel->setHorizontalHeaderLabels({"Player Name","Score","Time","Date"});

    while(!in.atEnd()){
        QString line = in.readLine().trimmed();
        if(line.isEmpty())continue;//Just incase there are empty lines skip them

        QStringList fields = line.split(',');

        if(fields.size() == 3){
            fields.append("N/A");
        }

        //Validate 4 columns
        if(fields.size() !=4){
            qDebug() << "line skiped if size != 4"<<line;
            continue;
        }

        //Columns entries
        QList<QStandardItem*> rowItems;

        //Player Name column 0
        if(Global::instance().getStringValue().trimmed() == fields[0].trimmed()){
            rowItems << new QStandardItem(fields[0].trimmed());

            //Score column 1
            bool isInt;
            int score = fields[1].trimmed().toInt(&isInt);
            if(!isInt) score = 0; //if score is not an int set 0 as default
            rowItems << new QStandardItem(QString::number(score));

            //Time column 2 Need to improve this and convert it some How
            rowItems << new QStandardItem(fields[2].trimmed());

            //Date column 3
            rowItems << new QStandardItem(fields[3].trimmed());

            scoreModel-> appendRow(rowItems);
        }

    }
    file.close();

    // qDebug()<< "Hello";

}



void ViewScoresPage::on_backBtn_clicked()
{
    //Condition needed here to hlukanisa and stuff
    if(getHeaderLbl()->text()== "Apollo Score Data"){
        Apollo* myApollo = new Apollo();
        this->close();
        myApollo->showPage(0);

    }
    else if(getHeaderLbl()->text()=="Zombie Score Data"){
        ZombieStoryline* myZombie = new ZombieStoryline();
        this->close();
        myZombie->showMaximized();


    }


}




void ViewScoresPage::on_comboBox_2_currentIndexChanged(int index)
{
    if(getSortComboBox()->currentText() == "Highest"){
        getTableView()->sortByColumn(1, Qt::DescendingOrder);
    }

    else if(getSortComboBox()->currentText() == "Lowest"){
        getTableView()->sortByColumn(1, Qt::AscendingOrder);
    }
}



void ViewScoresPage::on_comboBox_currentIndexChanged(int index)
{
    if(index == 0){

        QStandardItemModel* scoreModel = new QStandardItemModel(this);
        this->getTableView()->setModel(scoreModel);
        this->loadScoreData("ScoreData",scoreModel);
    }
    else if(index ==1){
        this->filterByName();
    }
}

