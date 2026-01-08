/********************************************************************************
** Form generated from reading UI file 'quizpage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUIZPAGE_H
#define UI_QUIZPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_quizpage
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *QuizWidget;
    QWidget *page_3;
    QPushButton *nextQuestBtn;
    QGroupBox *groupBox_2;
    QPlainTextEdit *questionArea;
    QPushButton *option3;
    QPushButton *option1;
    QPushButton *option2;
    QGroupBox *groupBox_3;
    QLabel *timer_lbl;
    QPushButton *btn1;
    QPushButton *btn3;
    QPushButton *btn6;
    QPushButton *btn4;
    QPushButton *btn2;
    QPushButton *btn5;
    QPushButton *btn7;
    QPushButton *btn8;
    QLabel *level_lbl;
    QPushButton *nextQuestBtn_2;

    void setupUi(QDialog *quizpage)
    {
        if (quizpage->objectName().isEmpty())
            quizpage->setObjectName("quizpage");
        quizpage->resize(904, 569);
        gridLayout = new QGridLayout(quizpage);
        gridLayout->setObjectName("gridLayout");
        QuizWidget = new QStackedWidget(quizpage);
        QuizWidget->setObjectName("QuizWidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QuizWidget->sizePolicy().hasHeightForWidth());
        QuizWidget->setSizePolicy(sizePolicy);
        QuizWidget->setStyleSheet(QString::fromUtf8(""));
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        nextQuestBtn = new QPushButton(page_3);
        nextQuestBtn->setObjectName("nextQuestBtn");
        nextQuestBtn->setGeometry(QRect(520, 340, 200, 50));
        nextQuestBtn->setMaximumSize(QSize(200, 50));
        nextQuestBtn->setStyleSheet(QString::fromUtf8("background-color: blue;  \n"
"                border: 2px solid white;  \n"
"                border-radius: 12px;       \n"
"                padding: 10px 24px;    \n"
"                font-size: 20px;             \n"
"                font-weight: bold;        \n"
"                text-align: center;   \n"
"                width: 200px;                \n"
"                height: 50px;      "));
        groupBox_2 = new QGroupBox(page_3);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(20, 40, 411, 501));
        QFont font;
        font.setPointSize(10);
        groupBox_2->setFont(font);
        questionArea = new QPlainTextEdit(groupBox_2);
        questionArea->setObjectName("questionArea");
        questionArea->setGeometry(QRect(12, 39, 387, 180));
        questionArea->setMaximumSize(QSize(16777215, 180));
        questionArea->setStyleSheet(QString::fromUtf8("background-color: white; \n"
"                color: black;             \n"
"                border: 2px solid white;   \n"
"                border-radius: 20px;         \n"
"                padding: 10px;            \n"
"                font-size: 14px;            \n"
"                font-family: Arial; "));
        questionArea->setReadOnly(true);
        option3 = new QPushButton(groupBox_2);
        option3->setObjectName("option3");
        option3->setGeometry(QRect(12, 406, 391, 74));
        option3->setStyleSheet(QString::fromUtf8("background-color: blue;  \n"
"                border: 2px solid white;  \n"
"                border-radius: 12px;       \n"
"                padding: 10px 24px;    \n"
"                font-size: 20px;             \n"
"                font-weight: bold;        \n"
"                text-align: center;   \n"
"                width: 200px;                \n"
"                height: 50px;      "));
        option1 = new QPushButton(groupBox_2);
        option1->setObjectName("option1");
        option1->setGeometry(QRect(12, 232, 391, 74));
        option1->setStyleSheet(QString::fromUtf8("background-color: blue;  \n"
"                border: 2px solid white;  \n"
"                border-radius: 12px;       \n"
"                padding: 10px 24px;    \n"
"                font-size: 20px;             \n"
"                font-weight: bold;        \n"
"                text-align: center;   \n"
"                width: 200px;                \n"
"                height: 50px;      "));
        option2 = new QPushButton(groupBox_2);
        option2->setObjectName("option2");
        option2->setGeometry(QRect(12, 319, 391, 74));
        option2->setStyleSheet(QString::fromUtf8("background-color: blue;  \n"
"                border: 2px solid white;  \n"
"                border-radius: 12px;       \n"
"                padding: 10px 24px;    \n"
"                font-size: 20px;             \n"
"                font-weight: bold;        \n"
"                text-align: center;   \n"
"                width: 200px;                \n"
"                height: 50px;      "));
        groupBox_3 = new QGroupBox(page_3);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(530, 40, 251, 281));
        groupBox_3->setFont(font);
        timer_lbl = new QLabel(groupBox_3);
        timer_lbl->setObjectName("timer_lbl");
        timer_lbl->setGeometry(QRect(110, 20, 121, 51));
        btn1 = new QPushButton(groupBox_3);
        btn1->setObjectName("btn1");
        btn1->setGeometry(QRect(10, 80, 51, 51));
        btn3 = new QPushButton(groupBox_3);
        btn3->setObjectName("btn3");
        btn3->setGeometry(QRect(170, 80, 51, 51));
        btn6 = new QPushButton(groupBox_3);
        btn6->setObjectName("btn6");
        btn6->setGeometry(QRect(90, 220, 51, 51));
        btn4 = new QPushButton(groupBox_3);
        btn4->setObjectName("btn4");
        btn4->setGeometry(QRect(170, 150, 51, 51));
        btn2 = new QPushButton(groupBox_3);
        btn2->setObjectName("btn2");
        btn2->setGeometry(QRect(90, 80, 51, 51));
        btn5 = new QPushButton(groupBox_3);
        btn5->setObjectName("btn5");
        btn5->setGeometry(QRect(170, 220, 51, 51));
        btn7 = new QPushButton(groupBox_3);
        btn7->setObjectName("btn7");
        btn7->setGeometry(QRect(10, 220, 51, 51));
        btn8 = new QPushButton(groupBox_3);
        btn8->setObjectName("btn8");
        btn8->setGeometry(QRect(10, 150, 51, 51));
        level_lbl = new QLabel(page_3);
        level_lbl->setObjectName("level_lbl");
        level_lbl->setGeometry(QRect(260, 10, 171, 16));
        level_lbl->setFont(font);
        nextQuestBtn_2 = new QPushButton(page_3);
        nextQuestBtn_2->setObjectName("nextQuestBtn_2");
        nextQuestBtn_2->setGeometry(QRect(520, 340, 200, 50));
        nextQuestBtn_2->setMaximumSize(QSize(200, 50));
        nextQuestBtn_2->setStyleSheet(QString::fromUtf8("background-color: blue;  \n"
"                border: 2px solid white;  \n"
"                border-radius: 12px;       \n"
"                padding: 10px 24px;    \n"
"                font-size: 20px;             \n"
"                font-weight: bold;        \n"
"                text-align: center;   \n"
"                width: 200px;                \n"
"                height: 50px;      "));
        QuizWidget->addWidget(page_3);

        gridLayout->addWidget(QuizWidget, 0, 0, 1, 1);


        retranslateUi(quizpage);

        QuizWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(quizpage);
    } // setupUi

    void retranslateUi(QDialog *quizpage)
    {
        quizpage->setWindowTitle(QCoreApplication::translate("quizpage", "Dialog", nullptr));
        nextQuestBtn->setText(QCoreApplication::translate("quizpage", "Next", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("quizpage", "Questions", nullptr));
        option3->setText(QCoreApplication::translate("quizpage", "Button", nullptr));
        option1->setText(QCoreApplication::translate("quizpage", "Button", nullptr));
        option2->setText(QCoreApplication::translate("quizpage", "Button", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("quizpage", "Timer", nullptr));
        timer_lbl->setText(QCoreApplication::translate("quizpage", "02:00", nullptr));
        btn1->setText(QCoreApplication::translate("quizpage", "1", nullptr));
        btn3->setText(QCoreApplication::translate("quizpage", "3", nullptr));
        btn6->setText(QCoreApplication::translate("quizpage", "6", nullptr));
        btn4->setText(QCoreApplication::translate("quizpage", "4", nullptr));
        btn2->setText(QCoreApplication::translate("quizpage", "2", nullptr));
        btn5->setText(QCoreApplication::translate("quizpage", "5", nullptr));
        btn7->setText(QCoreApplication::translate("quizpage", "7", nullptr));
        btn8->setText(QCoreApplication::translate("quizpage", "8", nullptr));
        level_lbl->setText(QCoreApplication::translate("quizpage", "TextLabel", nullptr));
        nextQuestBtn_2->setText(QCoreApplication::translate("quizpage", "Finish", nullptr));
    } // retranslateUi

};

namespace Ui {
    class quizpage: public Ui_quizpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUIZPAGE_H
