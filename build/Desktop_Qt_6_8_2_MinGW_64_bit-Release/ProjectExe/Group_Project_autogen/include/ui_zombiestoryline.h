/********************************************************************************
** Form generated from reading UI file 'zombiestoryline.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZOMBIESTORYLINE_H
#define UI_ZOMBIESTORYLINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ZombieStoryline
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *backBtn;
    QPushButton *missionBtn;
    QPushButton *quitBtn;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *scoreBtn;
    QTextBrowser *textBrowser;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ZombieStoryline)
    {
        if (ZombieStoryline->objectName().isEmpty())
            ZombieStoryline->setObjectName("ZombieStoryline");
        ZombieStoryline->resize(903, 555);
        gridLayout = new QGridLayout(ZombieStoryline);
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer = new QSpacerItem(200, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        backBtn = new QPushButton(ZombieStoryline);
        backBtn->setObjectName("backBtn");
        backBtn->setMaximumSize(QSize(200, 50));
        backBtn->setStyleSheet(QString::fromUtf8("background-color: blue;  \n"
"                border: 2px solid white;  \n"
"                border-radius: 12px;       \n"
"                padding: 10px 24px;    \n"
"                font-size: 20px;             \n"
"                font-weight: bold;        \n"
"                text-align: center;   \n"
"                width: 200px;                \n"
"                height: 50px;      "));

        horizontalLayout->addWidget(backBtn);

        missionBtn = new QPushButton(ZombieStoryline);
        missionBtn->setObjectName("missionBtn");
        missionBtn->setMaximumSize(QSize(200, 50));
        missionBtn->setStyleSheet(QString::fromUtf8("background-color: blue;  \n"
"                border: 2px solid white;  \n"
"                border-radius: 12px;       \n"
"                padding: 10px 24px;    \n"
"                font-size: 20px;             \n"
"                font-weight: bold;        \n"
"                text-align: center;   \n"
"                width: 200px;                \n"
"                height: 50px;      "));

        horizontalLayout->addWidget(missionBtn);

        quitBtn = new QPushButton(ZombieStoryline);
        quitBtn->setObjectName("quitBtn");
        quitBtn->setMaximumSize(QSize(200, 50));
        quitBtn->setStyleSheet(QString::fromUtf8("background-color: blue;  \n"
"                border: 2px solid white;  \n"
"                border-radius: 12px;       \n"
"                padding: 10px 24px;    \n"
"                font-size: 20px;             \n"
"                font-weight: bold;        \n"
"                text-align: center;   \n"
"                width: 200px;                \n"
"                height: 50px;      "));

        horizontalLayout->addWidget(quitBtn);


        gridLayout->addLayout(horizontalLayout, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(200, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        scoreBtn = new QPushButton(ZombieStoryline);
        scoreBtn->setObjectName("scoreBtn");
        scoreBtn->setMaximumSize(QSize(200, 50));
        scoreBtn->setStyleSheet(QString::fromUtf8("background-color: blue;  \n"
"                border: 2px solid white;  \n"
"                border-radius: 12px;       \n"
"                padding: 10px 24px;    \n"
"                font-size: 20px;             \n"
"                font-weight: bold;        \n"
"                text-align: center;   \n"
"                width: 200px;                \n"
"                height: 50px;      "));

        gridLayout->addWidget(scoreBtn, 0, 1, 1, 1);

        textBrowser = new QTextBrowser(ZombieStoryline);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setMaximumSize(QSize(600, 300));
        textBrowser->setStyleSheet(QString::fromUtf8("background-color: white; \n"
"                color: black;             \n"
"                border: 2px solid white;   \n"
"                border-radius: 20px;         \n"
"                padding: 10px;            \n"
"                font-size: 14px;            \n"
"                font-family: Arial; "));

        gridLayout->addWidget(textBrowser, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer, 3, 1, 1, 1);


        retranslateUi(ZombieStoryline);

        QMetaObject::connectSlotsByName(ZombieStoryline);
    } // setupUi

    void retranslateUi(QWidget *ZombieStoryline)
    {
        ZombieStoryline->setWindowTitle(QCoreApplication::translate("ZombieStoryline", "Form", nullptr));
        backBtn->setText(QCoreApplication::translate("ZombieStoryline", "BACK", nullptr));
        missionBtn->setText(QCoreApplication::translate("ZombieStoryline", "ACCEPT", nullptr));
        quitBtn->setText(QCoreApplication::translate("ZombieStoryline", "QUIT", nullptr));
        scoreBtn->setText(QCoreApplication::translate("ZombieStoryline", "VIEW SCORE", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("ZombieStoryline", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:14px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt;\">Alex, a lone traveler, finds himself stranded in a vast, scorching desert after his vehicle breaks down. The desert is eerily silent\342\200\224until nightfall. As the sun dips below the horizon, the ground trembles, and from the shifting dunes emerge hordes of ravenous zombies. With no choice but to run, Alex scours the landscape for anything th"
                        "at can help him survive. Scattered across the desert are abandoned military supply caches, ancient relics, and makeshift weapons. Every choice he makes about which weapon to use will determine his fate.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Segoe UI'; font-size:9pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:11pt;\">Alex's journey is split into three survival levels: Easy, Medium, and Hard. At each stage, he must answer questions correctly to determine the most effective weapons against different types of zombies. A wrong choice could mean certain death.</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ZombieStoryline: public Ui_ZombieStoryline {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZOMBIESTORYLINE_H
