#include <iostream>

using namespace std;

class Trivia
{
private:
    /* data */
    string Question;
    string Answer1;
    string Answer2;
    string Answer3;
    string Answer4;
    int correctAnswer;
public:
    Trivia();
    Trivia(string q, string a1, string a2, string a3, string a4, int ca);

    string getQuestion();
    string getAnswer1();
    string getAnswer2();
    string getAnswer3();
    string getAnswer4();
    int getCorrectAnswer();
};
