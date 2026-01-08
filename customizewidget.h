#ifndef CUSTOMIZEWIDGET_H
#define CUSTOMIZEWIDGET_H
#include "QString"

class customizewidget
{
public:
    customizewidget();

    static QString getEnabledButtonCustomStylesheet();
    static QString getDisabledButtonCustomStylesheet();
    static QString getCorrectOptionCustomStylesheet();
    static QString getWrongOptionCustomStylesheet();

};

#endif // CUSTOMIZEWIDGET_H
