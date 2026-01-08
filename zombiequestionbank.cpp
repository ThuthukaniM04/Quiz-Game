#include "zombiequestionbank.h"
#include <QFile>
#include <QXmlStreamReader>
#include <QRandomGenerator>
#include <QDebug>
#include <QFileInfo>

ZombieQuestionBank::ZombieQuestionBank()
{

}

void ZombieQuestionBank::loadQuestion(QString filename) {
    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Failed to open file:" << QFileInfo(filename).absoluteFilePath();
        return;
    }

    QXmlStreamReader xml(&file);

    while(!xml.atEnd() && !xml.hasError()){
        if(xml.isStartElement() && xml.name() == QStringLiteral("question")){
            Question* question = new Question();
            int correctOptionIndex = -1;
            int optionIndex = 0;
            while(!(xml.isEndElement() && xml.name() == QStringLiteral("question"))){
                xml.readNext();
                if(xml.isStartElement()){
                    if (xml.name() == QStringLiteral("text")) {
                        question->text = xml.readElementText();
                    }
                    if(xml.name() == QStringLiteral("option") && xml.attributes().value("correct").toString() == "true"){
                        correctOptionIndex = optionIndex;
                    }
                    if(xml.name() == QStringLiteral("option")){
                        QString optionText = xml.readElementText();
                        question->options.push_back(optionText);
                        optionIndex++;
                    }
                }
            }

            // Only add question if there is a valid correct option
            if (correctOptionIndex >= 0 && correctOptionIndex < question->options.size()) {
                question->correctOption = question->options.at(correctOptionIndex);
                quiz.push_back(question);
            } else {
                delete question; // prevent memory leak
                qDebug() << "Invalid or missing correct option in a question!";
            }
        }
        xml.readNext();
    }


    // Sort questions into quiz with MCQs and True/False questions
    sortQuestion();

    file.close();
}

void ZombieQuestionBank::sortQuestion() {

    QVector<Question*> questionLoader;

    int mcqQuestions = 6;
    int trueFalseQuestions = 2;

    while (questionLoader.size() != 8 && !quiz.isEmpty()) {
        int randomIndex = QRandomGenerator::global()->bounded(quiz.size());

        // Check if the question has 4 options (MCQ) and if there are still MCQ slots left
        if (quiz[randomIndex]->options.size() == 4 && mcqQuestions > 0) {
            mcqQuestions--;
            questionLoader.push_back(quiz[randomIndex]);
        }
        // Check if the question has 2 options (True/False) and if there are still True/False slots left
        else if (quiz[randomIndex]->options.size() == 2 && trueFalseQuestions > 0) {
            trueFalseQuestions--;
            questionLoader.push_back(quiz[randomIndex]);
        }

        quiz.removeAt(randomIndex);
    }

    // Update quiz with the selected questions

    quiz = questionLoader;

}

ZombieQuestionBank::Question* ZombieQuestionBank::getRandomQuestion(){

    if (quiz.isEmpty()) {
        qDebug() << "Quiz is empty! No questions available.";
        return nullptr;
    }

    // Pick the first question and remove it from the list
    Question* q = quiz.at(0);
    quiz.removeAt(0);


    return q; // Return pointer to random question
}
