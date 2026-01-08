#ifndef SCORE_H
#define SCORE_H

#include <QDialog> //might bring back if doesn't work
//#include <QMainWindow>
#include <QLabel>
#include <QPushButton>
#include <QPlainTextEdit>
#include "mainwindow.h"

namespace Ui {
class score;
}

class score : public QDialog
{
    Q_OBJECT

public:
    explicit score(QWidget *parent = nullptr);
    ~score();

    QLabel* getCompletedLevelLabel();
    QLabel* getScoreLabel();
    QLabel* getTimeLabel();

    MainWindow* mainpage;

    QPlainTextEdit* getfeedbackMessage();
    QPushButton* getNextLevel();
    QPushButton* getLevelTimeLabel();
   // QPushButton* getReplayButton();
    QPushButton* getScoreButton();



private slots:
    void on_finishBtn_clicked();

private:
    Ui::score *ui;
    void resizeEvent(QResizeEvent *event);
};

#endif // SCORE_H
