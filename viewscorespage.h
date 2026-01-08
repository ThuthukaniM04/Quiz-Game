#ifndef VIEWSCORESPAGE_H
#define VIEWSCORESPAGE_H
#include <QStandardItemModel>
#include <QComboBox>
#include <QPushButton>
#include <QTableView>
#include <QDialog>
#include <QString>
#include <QLabel>


namespace Ui {
class ViewScoresPage;
}

class ViewScoresPage : public QDialog
{
    Q_OBJECT

public:
    explicit ViewScoresPage(QWidget *parent = nullptr);
    ~ViewScoresPage();

   // QPushButton* getSearchBtn();
    QPushButton* getBackBtn();
    QTableView* getTableView();
    QComboBox* getSortComboBox();
   // QComboBox* getFilterComboBox();
    QLabel* getHeaderLbl();
    void loadScoreData(QString scoreData, QStandardItemModel *scoreModel);
    void filterByName();




private slots:
    void on_backBtn_clicked();

    void on_comboBox_2_currentIndexChanged(int index);

    //void on_comboBox_currentIndexChanged(int index);

    //void on_pushButton_clicked();

    void on_comboBox_currentIndexChanged(int index);

private:
    Ui::ViewScoresPage *ui;
    //void resizeEvent(QResizeEvent *event);



};

#endif // VIEWSCORESPAGE_H
