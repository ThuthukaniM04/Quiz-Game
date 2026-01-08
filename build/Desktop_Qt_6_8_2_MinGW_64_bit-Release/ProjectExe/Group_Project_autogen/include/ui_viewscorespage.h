/********************************************************************************
** Form generated from reading UI file 'viewscorespage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWSCORESPAGE_H
#define UI_VIEWSCORESPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ViewScoresPage
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QPushButton *backBtn;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *comboBox;
    QLabel *headerLbl;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QComboBox *comboBox_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *ViewScoresPage)
    {
        if (ViewScoresPage->objectName().isEmpty())
            ViewScoresPage->setObjectName("ViewScoresPage");
        ViewScoresPage->resize(884, 602);
        gridLayout = new QGridLayout(ViewScoresPage);
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer, 4, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        tableView = new QTableView(ViewScoresPage);
        tableView->setObjectName("tableView");
        tableView->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);

        verticalLayout->addWidget(tableView);

        backBtn = new QPushButton(ViewScoresPage);
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

        verticalLayout->addWidget(backBtn);


        gridLayout->addLayout(verticalLayout, 3, 1, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(ViewScoresPage);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color: lightgray;          \n"
"font-size: 20px;         \n"
"font-family: Arial;\n"
"font-weight: bold;\n"
"text-align: center;"));

        horizontalLayout_2->addWidget(label_2);

        comboBox = new QComboBox(ViewScoresPage);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        horizontalLayout_2->addWidget(comboBox);


        gridLayout->addLayout(horizontalLayout_2, 2, 2, 1, 1);

        headerLbl = new QLabel(ViewScoresPage);
        headerLbl->setObjectName("headerLbl");
        headerLbl->setStyleSheet(QString::fromUtf8("color: lightgray;          \n"
"font-size: 20px;         \n"
"font-family: Arial;\n"
"font-weight: bold;\n"
"text-align: center;"));

        gridLayout->addWidget(headerLbl, 0, 1, 1, 2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_3 = new QLabel(ViewScoresPage);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("color: lightgray;          \n"
"font-size: 20px;         \n"
"font-family: Arial;\n"
"font-weight: bold;\n"
"text-align: center;"));

        horizontalLayout->addWidget(label_3);

        comboBox_2 = new QComboBox(ViewScoresPage);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");

        horizontalLayout->addWidget(comboBox_2);


        gridLayout->addLayout(horizontalLayout, 2, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 1, 1, 1, 1);


        retranslateUi(ViewScoresPage);

        QMetaObject::connectSlotsByName(ViewScoresPage);
    } // setupUi

    void retranslateUi(QDialog *ViewScoresPage)
    {
        ViewScoresPage->setWindowTitle(QCoreApplication::translate("ViewScoresPage", "Dialog", nullptr));
        backBtn->setText(QCoreApplication::translate("ViewScoresPage", "Back", nullptr));
        label_2->setText(QCoreApplication::translate("ViewScoresPage", "Filter by :", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("ViewScoresPage", "All Scores", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("ViewScoresPage", "My name", nullptr));

        headerLbl->setText(QCoreApplication::translate("ViewScoresPage", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("ViewScoresPage", "Sort", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("ViewScoresPage", "Highest", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("ViewScoresPage", "Lowest", nullptr));
        comboBox_2->setItemText(2, QString());
        comboBox_2->setItemText(3, QString());

    } // retranslateUi

};

namespace Ui {
    class ViewScoresPage: public Ui_ViewScoresPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWSCORESPAGE_H
