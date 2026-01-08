#include "quizpage.h"
#include "ui_quizpage.h"
#include "backgroundsetter.h"

quizpage::quizpage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::quizpage)
{
    ui->setupUi(this);
}
QPlainTextEdit *quizpage::getQuestionArea()
{
    return ui-> questionArea;
}

QPushButton *quizpage::getNextButton()
{
    return ui-> nextQuestBtn;
}

QPushButton* quizpage::getFinishButton(){
    return ui-> nextQuestBtn_2;
}

QLabel *quizpage::getLevelLabel()
{
    return ui-> level_lbl;
}

QLabel *quizpage::getTimerLabel()
{
    return ui-> timer_lbl;
}

QPushButton *quizpage::getOptionButton1()
{
    return ui-> option1;
}

QPushButton *quizpage::getOptionButton2()
{
    return ui-> option2;
}

QPushButton *quizpage::getOptionButton3()
{
    return ui-> option3;
}

QPushButton *quizpage::getQuestionButton1()
{
    return ui->btn1;
}

QPushButton *quizpage::getQuestionButton2()
{
    return ui->btn2;
}

QPushButton *quizpage::getQuestionButton3()
{
    return ui->btn3;
}

QPushButton *quizpage::getQuestionButton4()
{
    return ui->btn4;
}

QPushButton *quizpage::getQuestionButton5()
{
    return ui->btn5;
}

QPushButton *quizpage::getQuestionButton6()
{
    return ui->btn6;
}

QPushButton *quizpage::getQuestionButton7()
{
    return ui->btn7;
}

QPushButton *quizpage::getQuestionButton8()
{
    return ui->btn8;
}

void quizpage::resizeEvent(QResizeEvent *event)
{
    backgroundsetter setter;
    QWidget::resizeEvent(event);
    setter.setBackgroundImage(this,":/resources/img/a4.jpg");
}

quizpage::~quizpage()
{
    delete ui;
}
