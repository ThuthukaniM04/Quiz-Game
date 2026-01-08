#ifndef APOLLO_H
#define APOLLO_H

#include <QDialog>
#include <QPlainTextEdit>
#include <QTimer>
#include <QTextCursor>
#include <QPushButton>
#include <QLabel>
#include <QPlainTextEdit>
#include <QRadioButton>
#include <QStandardItemModel>
#include "mainwindow.h"
#include "viewscorespage.h"
#include "quizpage.h"


namespace Ui {
class Apollo;
}

class Apollo : public QDialog
{
    Q_OBJECT

public:
    explicit Apollo(QWidget *parent = nullptr);
    ~Apollo();
    QPushButton* getLevelUnoButton();
    QPushButton* getLevelDosButton();
    QPushButton* getLevelTresButton();
    void showPage(int index);
    QStandardItemModel *scoreModel;
    MainWindow* homePage ;
    //ViewScoresPage * scorePage;


private:
    Ui::Apollo *ui;
private:
    QTimer *typingTimer;
    QString message;
    int currentCharIndex;
    QTimer * timer;
    int remainingTime;
    void resizeEvent(QResizeEvent *event);




private slots:

    void onTypingTimeout();

    void on_pushButton_7_clicked();
    void on_pushButton_6_clicked();
    void on_acceptBtn_clicked();
    void on_levelUnoBtn_clicked();
    void on_timeEdit_userTimeChanged(const QTime &time);
    void on_levelDosBtn_clicked();
    void on_levelTresBtn_clicked();

    void on_scoreBtn_clicked();
    void on_homeBtn_clicked();
};

#endif // APOLLO_H
