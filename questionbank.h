#ifndef QUESTIONBANK_H
#define QUESTIONBANK_H
#include <QVector>
#include <QString>

class questionbank
{
public:
    questionbank();

    struct Question{
        QString text;
        QVector<QString> options;
        QString answer;
    };
    Question *temp;
    QVector<Question*> questions;

    void loadQuestionFromXML(QString fname);
    void sortQuestionBank();
    Question *getRandomQuestion();
};

#endif // QUESTIONBANK_H
