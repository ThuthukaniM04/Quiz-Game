/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QPushButton *enterBtn;
    QPushButton *quitBtn;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QWidget *page_4;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_7;
    QLabel *themeLbl;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *logoutBtn;
    QPushButton *pushButton_4;
    QSpacerItem *horizontalSpacer_8;
    QWidget *page_2;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *userTxt;
    QHBoxLayout *horizontalLayout;
    QLineEdit *passTxt;
    QPushButton *pushButton_3;
    QPushButton *loginBtm;
    QPushButton *signUpBtn;
    QPushButton *pushButton_6;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QWidget *page_3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *userNameTxt;
    QLineEdit *PassTxt;
    QLineEdit *CPassTxt;
    QPushButton *cornfirmBtn;
    QPushButton *pushButton_5;
    QSpacerItem *horizontalSpacer_6;
    QMenuBar *menubar;
    QMenu *menuC;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setWindowModality(Qt::WindowModality::NonModal);
        MainWindow->setEnabled(true);
        MainWindow->resize(800, 604);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        MainWindow->setBaseSize(QSize(0, 0));
        MainWindow->setDockNestingEnabled(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        page = new QWidget();
        page->setObjectName("page");
        gridLayout = new QGridLayout(page);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(20);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(-1, 50, -1, 50);
        enterBtn = new QPushButton(page);
        enterBtn->setObjectName("enterBtn");
        enterBtn->setMaximumSize(QSize(200, 50));
        enterBtn->setStyleSheet(QString::fromUtf8("background-color: blue;  \n"
"                border: 2px solid white;  \n"
"                border-radius: 12px;       \n"
"                padding: 10px 24px;    \n"
"                font-size: 20px;             \n"
"                font-weight: bold;        \n"
"                text-align: center;   \n"
"                width: 200px;                \n"
"                height: 50px;      "));

        verticalLayout_2->addWidget(enterBtn);

        quitBtn = new QPushButton(page);
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

        verticalLayout_2->addWidget(quitBtn);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(275, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(275, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        stackedWidget->addWidget(page);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        gridLayout_3 = new QGridLayout(page_4);
        gridLayout_3->setObjectName("gridLayout_3");
        horizontalSpacer_7 = new QSpacerItem(250, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_7, 1, 0, 1, 1);

        themeLbl = new QLabel(page_4);
        themeLbl->setObjectName("themeLbl");
        themeLbl->setStyleSheet(QString::fromUtf8("color: white;          \n"
"font-size: 20px;         \n"
"font-family: Arial;\n"
"font-weight: bold;\n"
"text-align: center;"));

        gridLayout_3->addWidget(themeLbl, 0, 1, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(50);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(-1, 44, -1, 50);
        pushButton = new QPushButton(page_4);
        pushButton->setObjectName("pushButton");
        pushButton->setMaximumSize(QSize(250, 50));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: blue;  \n"
"                border: 2px solid white;  \n"
"                border-radius: 12px;       \n"
"                padding: 10px 24px;    \n"
"                font-size: 20px;             \n"
"                font-weight: bold;        \n"
"                text-align: center;   \n"
"                width: 200px;                \n"
"                height: 50px;      "));

        verticalLayout_4->addWidget(pushButton);

        pushButton_2 = new QPushButton(page_4);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMaximumSize(QSize(250, 50));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: blue;  \n"
"                border: 2px solid white;  \n"
"                border-radius: 12px;       \n"
"                padding: 10px 24px;    \n"
"                font-size: 20px;             \n"
"                font-weight: bold;        \n"
"                text-align: center;   \n"
"                width: 200px;                \n"
"                height: 50px;      "));

        verticalLayout_4->addWidget(pushButton_2);

        logoutBtn = new QPushButton(page_4);
        logoutBtn->setObjectName("logoutBtn");
        logoutBtn->setMaximumSize(QSize(250, 50));
        logoutBtn->setStyleSheet(QString::fromUtf8("background-color: blue;  \n"
"                border: 2px solid white;  \n"
"                border-radius: 12px;       \n"
"                padding: 10px 24px;    \n"
"                font-size: 20px;             \n"
"                font-weight: bold;        \n"
"                text-align: center;   \n"
"                width: 200px;                \n"
"                height: 50px;      "));

        verticalLayout_4->addWidget(logoutBtn);

        pushButton_4 = new QPushButton(page_4);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setMaximumSize(QSize(250, 50));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: blue;  \n"
"                border: 2px solid white;  \n"
"                border-radius: 12px;       \n"
"                padding: 10px 24px;    \n"
"                font-size: 20px;             \n"
"                font-weight: bold;        \n"
"                text-align: center;   \n"
"                width: 200px;                \n"
"                height: 50px;      "));

        verticalLayout_4->addWidget(pushButton_4);


        gridLayout_3->addLayout(verticalLayout_4, 1, 1, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(250, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_8, 1, 2, 1, 1);

        stackedWidget->addWidget(page_4);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        gridLayout_2 = new QGridLayout(page_2);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalSpacer_3 = new QSpacerItem(250, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(10);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(20);
        verticalLayout_5->setObjectName("verticalLayout_5");
        userTxt = new QLineEdit(page_2);
        userTxt->setObjectName("userTxt");
        userTxt->setMaximumSize(QSize(250, 30));

        verticalLayout_5->addWidget(userTxt);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        passTxt = new QLineEdit(page_2);
        passTxt->setObjectName("passTxt");
        passTxt->setMaximumSize(QSize(202, 30));
        passTxt->setEchoMode(QLineEdit::EchoMode::Password);

        horizontalLayout->addWidget(passTxt);

        pushButton_3 = new QPushButton(page_2);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setMaximumSize(QSize(40, 26));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Downloads/padlock.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_3->setIcon(icon);

        horizontalLayout->addWidget(pushButton_3);


        verticalLayout_5->addLayout(horizontalLayout);


        verticalLayout_6->addLayout(verticalLayout_5);

        loginBtm = new QPushButton(page_2);
        loginBtm->setObjectName("loginBtm");
        loginBtm->setMaximumSize(QSize(250, 50));
        loginBtm->setStyleSheet(QString::fromUtf8("background-color: blue;  \n"
"                border: 2px solid white;  \n"
"                border-radius: 12px;       \n"
"                padding: 10px 24px;    \n"
"                font-size: 20px;             \n"
"                font-weight: bold;        \n"
"                text-align: center;   \n"
"                width: 200px;                \n"
"                height: 50px;      "));

        verticalLayout_6->addWidget(loginBtm);

        signUpBtn = new QPushButton(page_2);
        signUpBtn->setObjectName("signUpBtn");
        signUpBtn->setMaximumSize(QSize(250, 50));
        signUpBtn->setStyleSheet(QString::fromUtf8("background-color: blue;  \n"
"                border: 2px solid white;  \n"
"                border-radius: 12px;       \n"
"                padding: 10px 24px;    \n"
"                font-size: 20px;             \n"
"                font-weight: bold;        \n"
"                text-align: center;   \n"
"                width: 200px;                \n"
"                height: 50px;      "));

        verticalLayout_6->addWidget(signUpBtn);

        pushButton_6 = new QPushButton(page_2);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setMaximumSize(QSize(250, 50));
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: blue;  \n"
"                border: 2px solid white;  \n"
"                border-radius: 12px;       \n"
"                padding: 10px 24px;    \n"
"                font-size: 20px;             \n"
"                font-weight: bold;        \n"
"                text-align: center;   \n"
"                width: 200px;                \n"
"                height: 50px;      "));

        verticalLayout_6->addWidget(pushButton_6);


        gridLayout_2->addLayout(verticalLayout_6, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(250, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 1, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 200, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout_2->addItem(verticalSpacer, 2, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout_2->addItem(verticalSpacer_2, 0, 1, 1, 1);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        horizontalLayout_4 = new QHBoxLayout(page_3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_5 = new QSpacerItem(250, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        userNameTxt = new QLineEdit(page_3);
        userNameTxt->setObjectName("userNameTxt");
        userNameTxt->setMaximumSize(QSize(16777215, 30));

        verticalLayout_3->addWidget(userNameTxt);

        PassTxt = new QLineEdit(page_3);
        PassTxt->setObjectName("PassTxt");
        PassTxt->setMaximumSize(QSize(16777215, 30));
        PassTxt->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout_3->addWidget(PassTxt);

        CPassTxt = new QLineEdit(page_3);
        CPassTxt->setObjectName("CPassTxt");
        CPassTxt->setMaximumSize(QSize(16777215, 30));
        CPassTxt->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout_3->addWidget(CPassTxt);

        cornfirmBtn = new QPushButton(page_3);
        cornfirmBtn->setObjectName("cornfirmBtn");
        cornfirmBtn->setMaximumSize(QSize(250, 50));
        cornfirmBtn->setStyleSheet(QString::fromUtf8("background-color: blue;  \n"
"                border: 2px solid white;  \n"
"                border-radius: 12px;       \n"
"                padding: 10px 24px;    \n"
"                font-size: 20px;             \n"
"                font-weight: bold;        \n"
"                text-align: center;   \n"
"                width: 200px;                \n"
"                height: 50px;      "));

        verticalLayout_3->addWidget(cornfirmBtn);

        pushButton_5 = new QPushButton(page_3);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setMaximumSize(QSize(250, 50));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: blue;  \n"
"                border: 2px solid white;  \n"
"                border-radius: 12px;       \n"
"                padding: 10px 24px;    \n"
"                font-size: 20px;             \n"
"                font-weight: bold;        \n"
"                text-align: center;   \n"
"                width: 200px;                \n"
"                height: 50px;      "));

        verticalLayout_3->addWidget(pushButton_5);


        horizontalLayout_4->addLayout(verticalLayout_3);

        horizontalSpacer_6 = new QSpacerItem(250, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        stackedWidget->addWidget(page_3);

        verticalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuC = new QMenu(menubar);
        menuC->setObjectName("menuC");
        menuC->setTearOffEnabled(false);
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuC->menuAction());

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "C++ Application", nullptr));
        enterBtn->setText(QCoreApplication::translate("MainWindow", "ENTER", nullptr));
        quitBtn->setText(QCoreApplication::translate("MainWindow", "QUIT", nullptr));
        themeLbl->setText(QCoreApplication::translate("MainWindow", "CHOOSE A STORYLINE", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "APOLLO 18", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "DESERT OF UNDEAD", nullptr));
        logoutBtn->setText(QCoreApplication::translate("MainWindow", "LOG OUT", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "QUIT ", nullptr));
        userTxt->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Username", nullptr));
        passTxt->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Password", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_3->setToolTip(QCoreApplication::translate("MainWindow", "Reveal/Hide Password", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_3->setText(QString());
        loginBtm->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        signUpBtn->setText(QCoreApplication::translate("MainWindow", "Sign up", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "QUIT GAME", nullptr));
        userNameTxt->setPlaceholderText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        PassTxt->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        CPassTxt->setPlaceholderText(QCoreApplication::translate("MainWindow", "Confirm Password", nullptr));
        cornfirmBtn->setText(QCoreApplication::translate("MainWindow", "Cornfirm", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "BACK", nullptr));
        menuC->setTitle(QCoreApplication::translate("MainWindow", "C++", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
