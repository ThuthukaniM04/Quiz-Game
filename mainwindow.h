#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void navigateToPage(int pageNumber);


private slots:
    void on_pushButton_2_clicked();

    void on_quitBtn_clicked();

    void on_enterBtn_clicked();

    void on_cornfirmBtn_clicked();

    void on_loginBtm_clicked();

    void on_signUpBtn_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    //void on_hideOrShowPassword_clicked();

    void on_logoutBtn_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::MainWindow *ui;
    void resizeEvent(QResizeEvent *event);
};
#endif // MAINWINDOW_H
