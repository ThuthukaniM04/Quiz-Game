#ifndef BACKGROUNDSETTER_H
#define BACKGROUNDSETTER_H

#include <QWidget>
#include <QPixmap>
#include <QPalette>
#include <QString>

class backgroundsetter {
public:
    backgroundsetter();

    // Template function for setting background image on any QWidget (or its subclasses)
    template <typename T>
    void setBackgroundImage(T* widget, const QString& imagePath) {
        // Ensure the widget is not null
        if (!widget) {
            return;
        }

        // Load the background image
        QPixmap bkg(imagePath);
        bkg = bkg.scaled(widget->size(), Qt::IgnoreAspectRatio);

        // Set the background palette
        QPalette palette;
        palette.setBrush(QPalette::Window, bkg);
        widget->setPalette(palette);
    }
};

#endif // BACKGROUNDSETTER_H
