#include "customizewidget.h"

customizewidget::customizewidget() {}

QString customizewidget::getEnabledButtonCustomStylesheet()
{
    QString styleSheet = "border: 2px solid;"
                         "background-color: blue;"
                         "color: rgb(255, 255, 255);"
                         "border-radius: 15px;";
    return styleSheet;

}

QString customizewidget::getDisabledButtonCustomStylesheet()
{
    QString styleSheet = "border: 2px solid;"
                         "background-color: grey;"
                         "color: rgb(255, 255, 255);"
                         "border-radius: 15px;";
    return styleSheet;

}

QString customizewidget::getCorrectOptionCustomStylesheet()
{
    QString styleSheet = "border: 2px solid;"
                         "background-color: green;"
                         "color: rgb(255, 255, 255);"
                         "border-radius: 15px;";
    return styleSheet;

}

QString customizewidget::getWrongOptionCustomStylesheet()
{
    QString styleSheet = "border: 2px solid;"
                         "background-color: red;"
                         "color: rgb(255, 255, 255);"
                         "border-radius: 15px;";
    return styleSheet;


}
