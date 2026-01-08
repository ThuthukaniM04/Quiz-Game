#ifndef ZOMBIEQUESTIONBANK_H
#define ZOMBIEQUESTIONBANK_H
#include <QString>
#include <QVector>

class ZombieQuestionBank
{
public:
    ZombieQuestionBank();


    struct Question{
        QString text;
        QVector<QString> options;
        QString correctOption;
    };

    Question* temp;
    QVector<Question*> quiz;

    void loadQuestion(QString filename);
    void sortQuestion();
    Question *getRandomQuestion();
};

#endif // QUESTIONBANK_H

