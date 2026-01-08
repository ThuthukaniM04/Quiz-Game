#ifndef DIFFICULTYLEVELS_H
#define DIFFICULTYLEVELS_H

#include <QDialog>
#include <QPushButton>

namespace Ui {
class DifficultyLevels;
}

class DifficultyLevels : public QDialog
{
    Q_OBJECT

public:
    explicit DifficultyLevels(QWidget *parent = nullptr);
    ~DifficultyLevels();
    QPushButton* getEasyLeveBtn();
    QPushButton* getMediumLeveBtn();
    QPushButton* getHardLeveBtn();


private slots:
    void on_easyBtn_clicked();


    void on_mediumBtn_clicked();

    void on_hardBtn_clicked();

    void on_backBtn_clicked();

    void on_quitBtn_clicked();

private:
    Ui::DifficultyLevels *ui;
    void resizeEvent(QResizeEvent *event);
};

#endif // DIFFICULTYLEVELS_H
