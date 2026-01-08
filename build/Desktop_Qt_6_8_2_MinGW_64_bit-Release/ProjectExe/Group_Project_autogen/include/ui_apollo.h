/********************************************************************************
** Form generated from reading UI file 'apollo.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APOLLO_H
#define UI_APOLLO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Apollo
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *AstackedWidget;
    QWidget *page;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QHBoxLayout *horizontalLayout;
    QPushButton *acceptBtn;
    QPushButton *scoreBtn;
    QPlainTextEdit *plainTextEdit;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QWidget *page_2;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QPushButton *levelUnoBtn;
    QPushButton *levelDosBtn;
    QPushButton *levelTresBtn;
    QPushButton *homeBtn;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QWidget *page_3;

    void setupUi(QDialog *Apollo)
    {
        if (Apollo->objectName().isEmpty())
            Apollo->setObjectName("Apollo");
        Apollo->resize(879, 539);
        Apollo->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(Apollo);
        verticalLayout->setObjectName("verticalLayout");
        AstackedWidget = new QStackedWidget(Apollo);
        AstackedWidget->setObjectName("AstackedWidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AstackedWidget->sizePolicy().hasHeightForWidth());
        AstackedWidget->setSizePolicy(sizePolicy);
        AstackedWidget->setStyleSheet(QString::fromUtf8(""));
        page = new QWidget();
        page->setObjectName("page");
        gridLayout = new QGridLayout(page);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(175);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_6 = new QPushButton(page);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: blue;  \n"
"                border: 2px solid white;  \n"
"                border-radius: 12px;       \n"
"                padding: 10px 24px;    \n"
"                font-size: 20px;             \n"
"                font-weight: bold;        \n"
"                text-align: center;   \n"
"                width: 200px;                \n"
"                height: 50px;       "));

        horizontalLayout_2->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(page);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setStyleSheet(QString::fromUtf8("background-color: blue;  \n"
"                border: 2px solid white;  \n"
"                border-radius: 12px;       \n"
"                padding: 10px 24px;    \n"
"                font-size: 20px;             \n"
"                font-weight: bold;        \n"
"                text-align: center;   \n"
"                width: 200px;                \n"
"                height: 50px;       "));

        horizontalLayout_2->addWidget(pushButton_7);


        gridLayout->addLayout(horizontalLayout_2, 3, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(175);
        horizontalLayout->setObjectName("horizontalLayout");
        acceptBtn = new QPushButton(page);
        acceptBtn->setObjectName("acceptBtn");
        acceptBtn->setStyleSheet(QString::fromUtf8("background-color: blue;  \n"
"                border: 2px solid white;  \n"
"                border-radius: 12px;       \n"
"                padding: 10px 24px;    \n"
"                font-size: 20px;             \n"
"                font-weight: bold;        \n"
"                text-align: center;   \n"
"                width: 200px;                \n"
"                height: 50px;           \n"
"              "));

        horizontalLayout->addWidget(acceptBtn);

        scoreBtn = new QPushButton(page);
        scoreBtn->setObjectName("scoreBtn");
        scoreBtn->setStyleSheet(QString::fromUtf8("background-color: blue;  \n"
"                border: 2px solid white;  \n"
"                border-radius: 12px;       \n"
"                padding: 10px 24px;    \n"
"                font-size: 20px;             \n"
"                font-weight: bold;        \n"
"                text-align: center;   \n"
"                width: 200px;                \n"
"                height: 50px;       "));

        horizontalLayout->addWidget(scoreBtn);


        gridLayout->addLayout(horizontalLayout, 2, 1, 1, 1);

        plainTextEdit = new QPlainTextEdit(page);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setMaximumSize(QSize(800, 200));
        plainTextEdit->setStyleSheet(QString::fromUtf8("background-color: white;  \n"
"                color: black;  \n"
"                border-radius: 10px;   \n"
"				border: solid blue ;   \n"
"                padding: 10px;            \n"
"                font-size: 14px;         \n"
"                font-family: Arial;\n"
"				border-color: #45a049; "));
        plainTextEdit->setReadOnly(true);

        gridLayout->addWidget(plainTextEdit, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 50, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 4, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 80, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        AstackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        gridLayout_2 = new QGridLayout(page_2);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalSpacer_4 = new QSpacerItem(300, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 1, 2, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        groupBox = new QGroupBox(page_2);
        groupBox->setObjectName("groupBox");
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        levelUnoBtn = new QPushButton(groupBox);
        levelUnoBtn->setObjectName("levelUnoBtn");
        levelUnoBtn->setMaximumSize(QSize(200, 50));
        levelUnoBtn->setStyleSheet(QString::fromUtf8("background-color: blue;  \n"
"                border: 2px solid white;  \n"
"                border-radius: 12px;       \n"
"                padding: 10px 24px;    \n"
"                font-size: 20px;             \n"
"                font-weight: bold;        \n"
"                text-align: center;   \n"
"                width: 200px;                \n"
"                height: 50px;       "));

        verticalLayout_4->addWidget(levelUnoBtn);

        levelDosBtn = new QPushButton(groupBox);
        levelDosBtn->setObjectName("levelDosBtn");
        levelDosBtn->setMaximumSize(QSize(200, 50));
        levelDosBtn->setStyleSheet(QString::fromUtf8("background-color: blue;  \n"
"                border: 2px solid white;  \n"
"                border-radius: 12px;       \n"
"                padding: 10px 24px;    \n"
"                font-size: 20px;             \n"
"                font-weight: bold;        \n"
"                text-align: center;   \n"
"                width: 200px;                \n"
"                height: 50px;       "));

        verticalLayout_4->addWidget(levelDosBtn);

        levelTresBtn = new QPushButton(groupBox);
        levelTresBtn->setObjectName("levelTresBtn");
        levelTresBtn->setMaximumSize(QSize(200, 50));
        levelTresBtn->setStyleSheet(QString::fromUtf8("background-color: blue;  \n"
"                border: 2px solid white;  \n"
"                border-radius: 12px;       \n"
"                padding: 10px 24px;    \n"
"                font-size: 20px;             \n"
"                font-weight: bold;        \n"
"                text-align: center;   \n"
"                width: 200px;                \n"
"                height: 50px;       "));

        verticalLayout_4->addWidget(levelTresBtn);


        verticalLayout_2->addLayout(verticalLayout_4);


        verticalLayout_3->addWidget(groupBox);

        homeBtn = new QPushButton(page_2);
        homeBtn->setObjectName("homeBtn");
        homeBtn->setMaximumSize(QSize(200, 50));
        homeBtn->setStyleSheet(QString::fromUtf8("background-color: blue;  \n"
"                border: 2px solid white;  \n"
"                border-radius: 12px;       \n"
"                padding: 10px 24px;    \n"
"                font-size: 20px;             \n"
"                font-weight: bold;        \n"
"                text-align: center;   \n"
"                width: 200px;                \n"
"                height: 50px;       "));

        verticalLayout_3->addWidget(homeBtn);


        gridLayout_2->addLayout(verticalLayout_3, 1, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 50, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout_2->addItem(verticalSpacer_3, 2, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(300, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 50, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout_2->addItem(verticalSpacer_4, 0, 1, 1, 1);

        AstackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        AstackedWidget->addWidget(page_3);

        verticalLayout->addWidget(AstackedWidget);


        retranslateUi(Apollo);

        AstackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Apollo);
    } // setupUi

    void retranslateUi(QDialog *Apollo)
    {
        Apollo->setWindowTitle(QCoreApplication::translate("Apollo", "Dialog", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Apollo", "Back", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Apollo", "Quit Game", nullptr));
        acceptBtn->setText(QCoreApplication::translate("Apollo", "Accept Mission", nullptr));
        scoreBtn->setText(QCoreApplication::translate("Apollo", "View Scores", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("Apollo", "I\n"
"\n"
"", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Apollo", "Select a Level", nullptr));
        levelUnoBtn->setText(QCoreApplication::translate("Apollo", "Level Uno", nullptr));
        levelDosBtn->setText(QCoreApplication::translate("Apollo", "Level Dos", nullptr));
        levelTresBtn->setText(QCoreApplication::translate("Apollo", "Level Tres", nullptr));
        homeBtn->setText(QCoreApplication::translate("Apollo", "Go to Home", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Apollo: public Ui_Apollo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APOLLO_H
