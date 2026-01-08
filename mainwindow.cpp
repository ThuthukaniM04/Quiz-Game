#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <vector>
#include <iostream>
#include "apollo.h"
#include "zombiestoryline.h"
#include "global.h"
#include "customizewidget.h"
#include "backgroundsetter.h"
using namespace std;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    ZombieStoryline* storyLine = new ZombieStoryline();
    this->hide();
    this->close();
    storyLine->show();
    storyLine-> showMaximized();

}


void MainWindow::on_quitBtn_clicked()
{
    close();
}


void MainWindow::on_enterBtn_clicked()
{
    ui -> stackedWidget -> setCurrentIndex(2);
}


void MainWindow::on_cornfirmBtn_clicked()
{
    QFile file("UserLogInInformation.txt");
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    //Checking if the usename already exist
    vector<QString> usernames;

    QTextStream in(&file);

    while (!in.atEnd()) {
        QString line = in.readLine();  // Read a line
        QStringList parts = line.split(",");  // Split by comma

        if (parts.size() == 2) {  // Ensure it contains username and password
            usernames.push_back(parts[0]);
        }
    }
    file.close();

    QString user = ui -> userNameTxt -> text();
    //QString user = ui -> userNameTxt -> text();
    auto exist = std::find(usernames.begin(),usernames.end(),user);

    if(exist != usernames.end()){
        QMessageBox::warning(this, "Log in","Username already exist try a unique username");
        ui->userNameTxt->text() =" ";

    }
    else{
        QString pass = ui ->PassTxt  -> text();
        if(user.isEmpty() || pass.isEmpty()){
            QMessageBox::warning(this, "Sign up","Username and password cannot be empty");
            return;
        }
        else{
            QFile file("UserLogInInformation.txt");
            file.open(QIODevice::Append | QIODevice::Text);

            QTextStream out(&file);
            out << user<<","<<pass<<"\n";
            file.close();
            QMessageBox::information(this,"Sign up","Account created successful");
            ui -> stackedWidget -> setCurrentIndex(0);
            ui->userNameTxt->clear();
            ui->PassTxt->clear();
            ui->CPassTxt->clear();
        }
    }



}


void MainWindow::on_loginBtm_clicked()
{
    QString user_name = ui->userTxt->text();
    QString password = ui->passTxt->text();

    QFile file("UserLogInInformation.txt");
    file.open(QIODevice::ReadOnly | QIODevice::Text);

    vector<QString> usernames;
    vector<QString> passwords;

    QTextStream in(&file);

    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList parts = line.split(",");

        if (parts.size() == 2) {
            usernames.push_back(parts[0].trimmed());
            passwords.push_back(parts[1].trimmed());
        }
    }
    file.close();

    bool loginSuccess = false;
    for (int i = 0; i < usernames.size(); ++i) {
        if (user_name == usernames[i] && password == passwords[i]) {
            loginSuccess = true;
            QMessageBox::information(this, "Login", "Log in successful.");
            Global::instance().setStringValue(user_name);
            ui->stackedWidget->setCurrentIndex(1);
            break;
        }
    }

    if (!loginSuccess) {
        QMessageBox::information(this, "Unsuccessful", "Log in failed.");
        ui->userTxt->clear();
        ui->passTxt->clear();
    }
    else if(loginSuccess){
        ui->userTxt->clear();
        ui->passTxt->clear();
    }



    //QMessageBox::information(this,"Unsuccessful","Log in failed.");


}



void MainWindow::on_signUpBtn_clicked()
{
    ui -> stackedWidget -> setCurrentIndex(3);
    ui->userTxt->clear();
    ui->passTxt->clear();
}


void MainWindow::on_pushButton_clicked()
{
    customizewidget* custom = new customizewidget();
    Apollo *newAP = new Apollo();
    this-> hide();
    this-> close();
    newAP->getLevelDosButton()->setStyleSheet(custom->getDisabledButtonCustomStylesheet());
    newAP->getLevelTresButton()->setStyleSheet(custom->getDisabledButtonCustomStylesheet());
    newAP->getLevelDosButton()->setEnabled(false);
    newAP->getLevelTresButton()->setEnabled(false);

    newAP-> showMaximized();


}
void MainWindow :: navigateToPage(int pageNumber){

    ui -> stackedWidget -> setCurrentIndex(pageNumber);

    this->showMaximized();
}



void MainWindow::on_pushButton_3_clicked()
{
    if(ui->passTxt->echoMode()==QLineEdit::Password){
        ui->passTxt->setEchoMode(QLineEdit::Normal);
    }else if(ui->passTxt->echoMode()==QLineEdit::Normal){
        ui->passTxt->setEchoMode(QLineEdit::Password);
    }
}


void MainWindow::on_logoutBtn_clicked()
{
    navigateToPage(2);
}


void MainWindow::on_pushButton_4_clicked()
{
    this->close();
}


void MainWindow::on_pushButton_6_clicked()
{
    this->close();
}


void MainWindow::on_pushButton_5_clicked()
{
    navigateToPage(2);
}

void MainWindow::resizeEvent(QResizeEvent *event)
{
    backgroundsetter setter;
    QWidget::resizeEvent(event);
    setter.setBackgroundImage(this,":/resources/img/m1.jpeg");
}

