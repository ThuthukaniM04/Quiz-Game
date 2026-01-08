#ifndef GLOBAL_H
#define GLOBAL_H

#include <QObject>
#include <QString>
#include <vector>

class Global : public QObject
{
    Q_OBJECT
public:
    static Global& instance() {
        static Global instance;
        return instance;
    }
    int getValue() const {
        return my_value;
    }
    void setValue(int value) {
        my_value = value;
        emit valueChanged(value);
    }

    QString getStringValue() const{
        return my_StringValue;
    }

    void setStringValue(const QString& value){
        my_StringValue = value;
        emit stringValueChanged(value);
    }

    int getTotalScore() const{
        return my_totalscore;
    }

    void addScore(int scoreToAdd){
        my_totalscore += scoreToAdd;
        emit totalScoreChanged(my_totalscore);
    }


    void addEasyScore(int score) {
        z_easyScore += score;
        emit totalScoreChangedZ(z_easyScore + z_mediumScore + z_hardScore);
    }
    void addMediumScore(int score) {
        z_mediumScore += score;
        emit totalScoreChangedZ(z_easyScore + z_mediumScore + z_hardScore);
    }
    void addHardScore(int score) {
        z_hardScore += score;
        emit totalScoreChangedZ(z_easyScore + z_mediumScore + z_hardScore);
    }

    void addEasyTime(int time) {
        z_easyTime += time;
        emit timeChangedZ(z_easyTime + z_mediumTime + z_hardTime);
    }
    void addMediumTime(int time) {
        z_mediumTime += time;
        emit timeChangedZ(z_easyTime + z_mediumTime + z_hardTime);
    }
    void addHardTime(int time) {
        z_hardTime += time;
        emit timeChangedZ(z_easyTime + z_mediumTime + z_hardTime);
    }


    int getTotalScoreZ() const {
        return z_easyScore + z_mediumScore + z_hardScore;
    }
    int getTotalTimeZ() const {
        return z_easyTime + z_mediumTime + z_hardTime;
    }

    int getTime() const{
        return my_totaltime;
    }

    void addTime(int valueToAdd){
        my_totaltime+= valueToAdd;
        emit timeChanged(my_totaltime);
    }
     //This is for the Zombies
    void resetAllLevels() {
        z_easyScore = 0;
        z_mediumScore = 0;
        z_hardScore = 0;
        z_easyTime = 0;
        z_mediumTime = 0;
        z_hardTime = 0;
        emit totalScoreChangedZ(0);
        emit timeChangedZ(0);
    }

    void resetApolloLevels(){
         my_totalscore = 0;
         my_totaltime = 0;

         emit totalScoreChanged(0);
         emit timeChanged(0);

    }

    //This call I put it where SomeOne restard the game
    //Global::instance().resetAllLevels();




private:
    int my_value = 0 ;
    QString my_StringValue;
    int my_totalscore = 0;
    int my_totaltime = 0;

    int z_easyScore = 0;
    int z_mediumScore = 0;
    int z_hardScore = 0;
    int z_easyTime = 0;
    int z_mediumTime = 0;
    int z_hardTime = 0;

    Global(){} //private constructor to prevent instantiation
    Global(const Global&) = delete; //Delete copy constructor
    Global& operator=(const Global&) =delete; //Delete assignment operator

signals:
    void valueChanged(int newValue);
    void stringValueChanged(const QString& newValue);
    void totalScoreChanged(int newTotalScore);
    void timeChanged(int newTime);
    void totalScoreChangedZ(int newTotalScoreZ);
    void timeChangedZ(int newTimeZ);



};


#endif // GLOBAL_H
