#include "questionbank.h"
#include <QFile>
#include <QXmlStreamReader>
#include <QRandomGenerator>
#include <QDebug>

questionbank::questionbank() {}

void questionbank::loadQuestionFromXML(QString fname)
{
    QFile file(fname);

    //If there's an error opening the xml file
    if(!file.open(QIODevice:: ReadOnly | QIODevice:: Text)){
        qDebug()<< "Failed to open file";
        return;
    }

    QXmlStreamReader xml(&file);

    while (!xml.atEnd() && !xml.hasError()) {
        if (xml.isStartElement() && xml.name() == QStringLiteral("question")) {
            Question* question = new Question();
            int correctOptionIndex = -1;
            int optionIndex = 0;
            while (!(xml.isEndElement() && xml.name() == QStringLiteral("question"))) {
                xml.readNext();
                if (xml.isStartElement()) {
                    if (xml.name() == QStringLiteral("text")) {
                        question->text = xml.readElementText();
                    }
                    if (xml.name() == QStringLiteral("option") && xml.attributes().value("correct").toString() == "true") {
                        correctOptionIndex = optionIndex;
                    }
                    if (xml.name() == QStringLiteral("option")) {
                        QString optionText = xml.readElementText();
                        question->options.push_back(optionText);
                        optionIndex++;
                    }
                }
            }
            question->answer = question->options.at(correctOptionIndex);
            questions.push_back(question);

        }
        xml.readNext();
    }
    //qDebug()<<"The size of the question vector"<< questions.size();

    sortQuestionBank();

    file.close();

}

void questionbank::sortQuestionBank()
{
    //qDebug()<<"The size of the question vector before sort"<< questions.size();
    QVector<Question*> qLoader;
    int mcq = 6;
    int tf = 2;
    int randomIndex = QRandomGenerator::global()->bounded(questions.size());


    while (qLoader.size() != 8) {
       /* if (questions.empty()) {  // 🔹 Add this check!
            qWarning() << "Not enough questions to fill the bank!";
            break;
        }*/

        if (questions[randomIndex]->options.size() == 3 && mcq > 0) {
            mcq--;
            qLoader.push_back(questions[randomIndex]);
        }
        else if (questions[randomIndex]->options.size() == 2 && tf > 0) {
            tf--;
            qLoader.push_back(questions[randomIndex]);
        }

        questions.removeOne( questions[randomIndex]);
        randomIndex = QRandomGenerator::global()->bounded(questions.size());
        // Remove after processing
    }

    questions = qLoader;
    //qDebug()<<"The size of the question vector after sorts"<< questions.size();
}

questionbank::Question *questionbank::getRandomQuestion()
{

    if (questions.empty()) {
        return nullptr;
    }
    Question* q = questions.at(0);
    questions.removeOne(q);

    return q; // Return pointer to random question
}
