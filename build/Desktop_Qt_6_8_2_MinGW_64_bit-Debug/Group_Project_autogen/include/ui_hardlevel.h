/********************************************************************************
** Form generated from reading UI file 'hardlevel.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HARDLEVEL_H
#define UI_HARDLEVEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hardlevel
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QTextEdit *textEdit;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *optionBtn1;
    QPushButton *optionBtn2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QPushButton *optionBtn3;
    QPushButton *optionBtn4;
    QHBoxLayout *horizontalLayout;
    QPushButton *exitBtn;
    QPushButton *nextBtn;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn3;
    QPushButton *btn4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn5;
    QPushButton *btn6;
    QPushButton *btn7;
    QPushButton *btn8;
    QGroupBox *groupBox_2;
    QLabel *timerLabel;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *hardlevel)
    {
        if (hardlevel->objectName().isEmpty())
            hardlevel->setObjectName("hardlevel");
        hardlevel->resize(874, 499);
        gridLayout = new QGridLayout(hardlevel);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        textEdit = new QTextEdit(hardlevel);
        textEdit->setObjectName("textEdit");
        textEdit->setMaximumSize(QSize(600, 100));
        textEdit->setStyleSheet(QString::fromUtf8("background-color: white; \n"
"                color: black;             \n"
"                border: 2px solid white;   \n"
"                border-radius: 20px;         \n"
"                padding: 10px;            \n"
"                font-size: 14px;            \n"
"                font-family: Arial; "));
        textEdit->setReadOnly(true);

        verticalLayout_5->addWidget(textEdit);

        groupBox_3 = new QGroupBox(hardlevel);
        groupBox_3->setObjectName("groupBox_3");
        QFont font;
        font.setPointSize(10);
        groupBox_3->setFont(font);
        layoutWidget = new QWidget(groupBox_3);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 40, 252, 108));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        optionBtn1 = new QPushButton(layoutWidget);
        optionBtn1->setObjectName("optionBtn1");
        optionBtn1->setMaximumSize(QSize(250, 50));
        optionBtn1->setStyleSheet(QString::fromUtf8("background-color: blue;  \n"
"                border: 2px solid white;  \n"
"                border-radius: 12px;       \n"
"                padding: 10px 24px;    \n"
"                font-size: 20px;             \n"
"                font-weight: bold;        \n"
"                text-align: center;   \n"
"                width: 200px;                \n"
"                height: 50px;      "));

        verticalLayout->addWidget(optionBtn1);

        optionBtn2 = new QPushButton(layoutWidget);
        optionBtn2->setObjectName("optionBtn2");
        optionBtn2->setMaximumSize(QSize(250, 50));
        optionBtn2->setStyleSheet(QString::fromUtf8("background-color: blue;  \n"
"                border: 2px solid white;  \n"
"                border-radius: 12px;       \n"
"                padding: 10px 24px;    \n"
"                font-size: 20px;             \n"
"                font-weight: bold;        \n"
"                text-align: center;   \n"
"                width: 200px;                \n"
"                height: 50px;      "));

        verticalLayout->addWidget(optionBtn2);

        layoutWidget1 = new QWidget(groupBox_3);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(280, 40, 252, 108));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        optionBtn3 = new QPushButton(layoutWidget1);
        optionBtn3->setObjectName("optionBtn3");
        optionBtn3->setMaximumSize(QSize(250, 50));
        optionBtn3->setStyleSheet(QString::fromUtf8("background-color: blue;  \n"
"                border: 2px solid white;  \n"
"                border-radius: 12px;       \n"
"                padding: 10px 24px;    \n"
"                font-size: 20px;             \n"
"                font-weight: bold;        \n"
"                text-align: center;   \n"
"                width: 200px;                \n"
"                height: 50px;      "));

        verticalLayout_2->addWidget(optionBtn3);

        optionBtn4 = new QPushButton(layoutWidget1);
        optionBtn4->setObjectName("optionBtn4");
        optionBtn4->setMaximumSize(QSize(250, 50));
        optionBtn4->setStyleSheet(QString::fromUtf8("background-color: blue;  \n"
"                border: 2px solid white;  \n"
"                border-radius: 12px;       \n"
"                padding: 10px 24px;    \n"
"                font-size: 20px;             \n"
"                font-weight: bold;        \n"
"                text-align: center;   \n"
"                width: 200px;                \n"
"                height: 50px;      "));

        verticalLayout_2->addWidget(optionBtn4);


        verticalLayout_5->addWidget(groupBox_3);


        verticalLayout_6->addLayout(verticalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(140);
        horizontalLayout->setObjectName("horizontalLayout");
        exitBtn = new QPushButton(hardlevel);
        exitBtn->setObjectName("exitBtn");
        exitBtn->setMaximumSize(QSize(200, 50));
        exitBtn->setStyleSheet(QString::fromUtf8("background-color: blue;  \n"
"                border: 2px solid white;  \n"
"                border-radius: 12px;       \n"
"                padding: 10px 24px;    \n"
"                font-size: 20px;             \n"
"                font-weight: bold;        \n"
"                text-align: center;   \n"
"                width: 200px;                \n"
"                height: 50px;      "));

        horizontalLayout->addWidget(exitBtn);

        nextBtn = new QPushButton(hardlevel);
        nextBtn->setObjectName("nextBtn");
        nextBtn->setMaximumSize(QSize(200, 50));
        nextBtn->setStyleSheet(QString::fromUtf8("background-color: blue;  \n"
"                border: 2px solid white;  \n"
"                border-radius: 12px;       \n"
"                padding: 10px 24px;    \n"
"                font-size: 20px;             \n"
"                font-weight: bold;        \n"
"                text-align: center;   \n"
"                width: 200px;                \n"
"                height: 50px;      "));

        horizontalLayout->addWidget(nextBtn);


        verticalLayout_6->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout_6, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 50, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        groupBox = new QGroupBox(hardlevel);
        groupBox->setObjectName("groupBox");
        groupBox->setFont(font);
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        btn1 = new QPushButton(groupBox);
        btn1->setObjectName("btn1");
        btn1->setMaximumSize(QSize(40, 40));

        horizontalLayout_3->addWidget(btn1);

        btn2 = new QPushButton(groupBox);
        btn2->setObjectName("btn2");
        btn2->setMaximumSize(QSize(40, 40));

        horizontalLayout_3->addWidget(btn2);

        btn3 = new QPushButton(groupBox);
        btn3->setObjectName("btn3");
        btn3->setMaximumSize(QSize(40, 40));

        horizontalLayout_3->addWidget(btn3);

        btn4 = new QPushButton(groupBox);
        btn4->setObjectName("btn4");
        btn4->setMaximumSize(QSize(40, 40));

        horizontalLayout_3->addWidget(btn4);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        btn5 = new QPushButton(groupBox);
        btn5->setObjectName("btn5");
        btn5->setMaximumSize(QSize(40, 40));

        horizontalLayout_2->addWidget(btn5);

        btn6 = new QPushButton(groupBox);
        btn6->setObjectName("btn6");
        btn6->setMaximumSize(QSize(40, 40));

        horizontalLayout_2->addWidget(btn6);

        btn7 = new QPushButton(groupBox);
        btn7->setObjectName("btn7");
        btn7->setMaximumSize(QSize(40, 40));

        horizontalLayout_2->addWidget(btn7);

        btn8 = new QPushButton(groupBox);
        btn8->setObjectName("btn8");
        btn8->setMaximumSize(QSize(40, 40));

        horizontalLayout_2->addWidget(btn8);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_4->addWidget(groupBox);

        groupBox_2 = new QGroupBox(hardlevel);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setFont(font);
        timerLabel = new QLabel(groupBox_2);
        timerLabel->setObjectName("timerLabel");
        timerLabel->setGeometry(QRect(10, 30, 63, 20));
        timerLabel->setStyleSheet(QString::fromUtf8("color: green;          \n"
"font-size: 20px;         \n"
"font-family: Arial;\n"
"font-weight: bold;\n"
"text-align: center;"));

        verticalLayout_4->addWidget(groupBox_2);


        gridLayout->addLayout(verticalLayout_4, 1, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 50, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 80, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 2, 2, 1, 1);


        retranslateUi(hardlevel);

        QMetaObject::connectSlotsByName(hardlevel);
    } // setupUi

    void retranslateUi(QDialog *hardlevel)
    {
        hardlevel->setWindowTitle(QCoreApplication::translate("hardlevel", "Dialog", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("hardlevel", "Options", nullptr));
        optionBtn1->setText(QCoreApplication::translate("hardlevel", "RadioButton", nullptr));
        optionBtn2->setText(QCoreApplication::translate("hardlevel", "RadioButton", nullptr));
        optionBtn3->setText(QCoreApplication::translate("hardlevel", "RadioButton", nullptr));
        optionBtn4->setText(QCoreApplication::translate("hardlevel", "RadioButton", nullptr));
        exitBtn->setText(QCoreApplication::translate("hardlevel", "Exit Game", nullptr));
        nextBtn->setText(QCoreApplication::translate("hardlevel", "Next", nullptr));
        groupBox->setTitle(QCoreApplication::translate("hardlevel", "Progress", nullptr));
        btn1->setText(QCoreApplication::translate("hardlevel", "1", nullptr));
        btn2->setText(QCoreApplication::translate("hardlevel", "2", nullptr));
        btn3->setText(QCoreApplication::translate("hardlevel", "3", nullptr));
        btn4->setText(QCoreApplication::translate("hardlevel", "4", nullptr));
        btn5->setText(QCoreApplication::translate("hardlevel", "5", nullptr));
        btn6->setText(QCoreApplication::translate("hardlevel", "6", nullptr));
        btn7->setText(QCoreApplication::translate("hardlevel", "7", nullptr));
        btn8->setText(QCoreApplication::translate("hardlevel", "8", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("hardlevel", "Timer", nullptr));
        timerLabel->setText(QCoreApplication::translate("hardlevel", "00:00", nullptr));
    } // retranslateUi

};

namespace Ui {
    class hardlevel: public Ui_hardlevel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HARDLEVEL_H
