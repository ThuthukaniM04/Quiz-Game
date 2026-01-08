/********************************************************************************
** Form generated from reading UI file 'score.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCORE_H
#define UI_SCORE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_score
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QPushButton *scoreBtn;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QPushButton *timeBtn;
    QHBoxLayout *horizontalLayout;
    QPushButton *finishBtn;
    QSpacerItem *verticalSpacer;
    QPlainTextEdit *feedbackArea;
    QLabel *level_lbl;

    void setupUi(QDialog *score)
    {
        if (score->objectName().isEmpty())
            score->setObjectName("score");
        score->resize(776, 422);
        gridLayout = new QGridLayout(score);
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer_2 = new QSpacerItem(100, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(100, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(20);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(score);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: white;          \n"
"font-size: 20px;         \n"
"font-family: Arial;\n"
"font-weight: bold;\n"
"text-align: center;"));

        horizontalLayout_2->addWidget(label);

        scoreBtn = new QPushButton(score);
        scoreBtn->setObjectName("scoreBtn");
        scoreBtn->setMaximumSize(QSize(100, 50));
        scoreBtn->setStyleSheet(QString::fromUtf8("background-color: blue;  \n"
"                border: 2px solid white;  \n"
"                border-radius: 12px;       \n"
"                padding: 10px 24px;    \n"
"                font-size: 20px;             \n"
"                font-weight: bold;        \n"
"                text-align: center;   \n"
"                width: 80px;                \n"
"                height: 50px;      "));

        horizontalLayout_2->addWidget(scoreBtn);


        gridLayout->addLayout(horizontalLayout_2, 2, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(score);
        label_2->setObjectName("label_2");
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: white;          \n"
"font-size: 20px;         \n"
"font-family: Arial;\n"
"font-weight: bold;\n"
"text-align: center;"));

        horizontalLayout_3->addWidget(label_2);

        timeBtn = new QPushButton(score);
        timeBtn->setObjectName("timeBtn");
        timeBtn->setMaximumSize(QSize(120, 50));
        timeBtn->setStyleSheet(QString::fromUtf8("background-color: blue;  \n"
"                border: 2px solid white;  \n"
"                border-radius: 12px;       \n"
"                padding: 10px 24px;    \n"
"                font-size: 20px;             \n"
"                font-weight: bold;        \n"
"                text-align: center;   \n"
"                width: 100px;                \n"
"                height: 50px;      "));

        horizontalLayout_3->addWidget(timeBtn);


        gridLayout->addLayout(horizontalLayout_3, 3, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(181);
        horizontalLayout->setObjectName("horizontalLayout");
        finishBtn = new QPushButton(score);
        finishBtn->setObjectName("finishBtn");
        finishBtn->setMaximumSize(QSize(200, 50));
        finishBtn->setStyleSheet(QString::fromUtf8("background-color: blue;  \n"
"                border: 2px solid white;  \n"
"                border-radius: 12px;       \n"
"                padding: 10px 24px;    \n"
"                font-size: 20px;             \n"
"                font-weight: bold;        \n"
"                text-align: center;   \n"
"                width: 200px;                \n"
"                height: 50px;      "));

        horizontalLayout->addWidget(finishBtn);


        gridLayout->addLayout(horizontalLayout, 4, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 100, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer, 5, 1, 1, 1);

        feedbackArea = new QPlainTextEdit(score);
        feedbackArea->setObjectName("feedbackArea");
        feedbackArea->setMaximumSize(QSize(650, 100));
        feedbackArea->setStyleSheet(QString::fromUtf8("background-color: white; \n"
"                color: black;             \n"
"                border: 2px solid white;   \n"
"                border-radius: 20px;         \n"
"                padding: 10px;            \n"
"                font-size: 14px;            \n"
"                font-family: Arial; "));
        feedbackArea->setReadOnly(true);

        gridLayout->addWidget(feedbackArea, 1, 1, 1, 1);

        level_lbl = new QLabel(score);
        level_lbl->setObjectName("level_lbl");
        level_lbl->setFont(font);
        level_lbl->setStyleSheet(QString::fromUtf8("color: white;          \n"
"font-size: 20px;         \n"
"font-family: Arial;\n"
"font-weight: bold;\n"
"text-align: center;"));

        gridLayout->addWidget(level_lbl, 0, 1, 1, 2);


        retranslateUi(score);

        QMetaObject::connectSlotsByName(score);
    } // setupUi

    void retranslateUi(QDialog *score)
    {
        score->setWindowTitle(QCoreApplication::translate("score", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("score", "Score", nullptr));
        scoreBtn->setText(QCoreApplication::translate("score", "score", nullptr));
        label_2->setText(QCoreApplication::translate("score", "Time", nullptr));
        timeBtn->setText(QCoreApplication::translate("score", "time", nullptr));
        finishBtn->setText(QCoreApplication::translate("score", "Finish", nullptr));
        level_lbl->setText(QCoreApplication::translate("score", "level", nullptr));
    } // retranslateUi

};

namespace Ui {
    class score: public Ui_score {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCORE_H
