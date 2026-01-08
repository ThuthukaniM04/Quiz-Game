#ifndef ZOMBIESTORYLINE_H
#define ZOMBIESTORYLINE_H

#include <QWidget>
#include <QStandardItemModel>

namespace Ui {
class ZombieStoryline;
}

class ZombieStoryline : public QWidget
{
    Q_OBJECT

public:
    explicit ZombieStoryline(QWidget *parent = nullptr);
    ~ZombieStoryline();
     QStandardItemModel *scoreModel;



private slots:
    void on_missionBtn_clicked();

    void on_scoreBtn_clicked();

    void on_backBtn_clicked();

    void on_quitBtn_clicked();

private:
    Ui::ZombieStoryline *ui;
    void resizeEvent(QResizeEvent *event);
};

#endif // ZOMBIESTORYLINE_H
