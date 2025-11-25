#ifndef QUESTIONS_H
#define QUESTIONS_H

#include <string>
#include <vector>

using namespace std;

struct Question {
    string question;
    vector<string> options;
    char correctAnswer;
};

vector<Question> loadEasyQuestions();
vector<Question> loadMediumQuestions();
vector<Question> loadHardQuestions();

#endif
