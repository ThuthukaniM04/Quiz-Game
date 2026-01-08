#ifndef QUIZPAGE_H
#define QUIZPAGE_H

#include <QDialog>
#include <QLabel>
#include <QPlainTextEdit>


namespace Ui {
class quizpage;
}

class quizpage : public QDialog
{
    Q_OBJECT

public:
    explicit quizpage(QWidget *parent = nullptr);
    ~quizpage();

    QPlainTextEdit* getQuestionArea();

    QPushButton* getNextButton();
    QPushButton* getFinishButton();


    QLabel* getLevelLabel();
    QLabel* getTimerLabel();

    QPushButton* getOptionButton1();
    QPushButton* getOptionButton2();
    QPushButton* getOptionButton3();

    QPushButton* getQuestionButton1();
    QPushButton* getQuestionButton2();
    QPushButton* getQuestionButton3();
    QPushButton* getQuestionButton4();
    QPushButton* getQuestionButton5();
    QPushButton* getQuestionButton6();
    QPushButton* getQuestionButton7();
    QPushButton* getQuestionButton8();

private:
    Ui::quizpage *ui;
    void resizeEvent(QResizeEvent *event);
};

#endif // QUIZPAGE_H
