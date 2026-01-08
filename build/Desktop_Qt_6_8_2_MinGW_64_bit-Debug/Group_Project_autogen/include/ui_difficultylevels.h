/********************************************************************************
** Form generated from reading UI file 'difficultylevels.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIFFICULTYLEVELS_H
#define UI_DIFFICULTYLEVELS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DifficultyLevels
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *quitBtn;
    QPushButton *backBtn;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QPushButton *easyBtn;
    QPushButton *mediumBtn;
    QPushButton *hardBtn;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *DifficultyLevels)
    {
        if (DifficultyLevels->objectName().isEmpty())
            DifficultyLevels->setObjectName("DifficultyLevels");
        DifficultyLevels->resize(869, 542);
        gridLayout = new QGridLayout(DifficultyLevels);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        quitBtn = new QPushButton(DifficultyLevels);
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

        backBtn = new QPushButton(DifficultyLevels);
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


        gridLayout->addLayout(horizontalLayout, 3, 1, 1, 1);

        label = new QLabel(DifficultyLevels);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color: black;          \n"
"font-size: 20px;         \n"
"font-family: Arial;\n"
"font-weight: bold;\n"
"text-align: center;"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(200, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(80, -1, -1, -1);
        easyBtn = new QPushButton(DifficultyLevels);
        easyBtn->setObjectName("easyBtn");
        easyBtn->setMaximumSize(QSize(200, 50));
        easyBtn->setStyleSheet(QString::fromUtf8("background-color: blue;  \n"
"                border: 2px solid white;  \n"
"                border-radius: 12px;       \n"
"                padding: 10px 24px;    \n"
"                font-size: 20px;             \n"
"                font-weight: bold;        \n"
"                text-align: center;   \n"
"                width: 200px;                \n"
"                height: 50px;       "));

        verticalLayout->addWidget(easyBtn);

        mediumBtn = new QPushButton(DifficultyLevels);
        mediumBtn->setObjectName("mediumBtn");
        mediumBtn->setMaximumSize(QSize(200, 50));
        mediumBtn->setStyleSheet(QString::fromUtf8("background-color: blue;  \n"
"                border: 2px solid white;  \n"
"                border-radius: 12px;       \n"
"                padding: 10px 24px;    \n"
"                font-size: 20px;             \n"
"                font-weight: bold;        \n"
"                text-align: center;   \n"
"                width: 200px;                \n"
"                height: 50px;       "));

        verticalLayout->addWidget(mediumBtn);

        hardBtn = new QPushButton(DifficultyLevels);
        hardBtn->setObjectName("hardBtn");
        hardBtn->setMaximumSize(QSize(200, 50));
        hardBtn->setStyleSheet(QString::fromUtf8("background-color: blue;  \n"
"                border: 2px solid white;  \n"
"                border-radius: 12px;       \n"
"                padding: 10px 24px;    \n"
"                font-size: 20px;             \n"
"                font-weight: bold;        \n"
"                text-align: center;   \n"
"                width: 200px;                \n"
"                height: 50px;       "));

        verticalLayout->addWidget(hardBtn);


        gridLayout->addLayout(verticalLayout, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 150, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer, 4, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(200, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 100, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 1, 1, 1, 1);


        retranslateUi(DifficultyLevels);

        QMetaObject::connectSlotsByName(DifficultyLevels);
    } // setupUi

    void retranslateUi(QDialog *DifficultyLevels)
    {
        DifficultyLevels->setWindowTitle(QCoreApplication::translate("DifficultyLevels", "Dialog", nullptr));
        quitBtn->setText(QCoreApplication::translate("DifficultyLevels", "QUIT", nullptr));
        backBtn->setText(QCoreApplication::translate("DifficultyLevels", "BACK", nullptr));
        label->setText(QCoreApplication::translate("DifficultyLevels", "LEVELS OF DIFFICULTY", nullptr));
        easyBtn->setText(QCoreApplication::translate("DifficultyLevels", "EASY", nullptr));
        mediumBtn->setText(QCoreApplication::translate("DifficultyLevels", "MEDIUM", nullptr));
        hardBtn->setText(QCoreApplication::translate("DifficultyLevels", "HARD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DifficultyLevels: public Ui_DifficultyLevels {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIFFICULTYLEVELS_H
