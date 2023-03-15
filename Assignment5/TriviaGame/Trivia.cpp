#include "Trivia.h"

Trivia::Trivia(){
    
};
Trivia::Trivia(string q, string a1, string a2, string a3, string a4, int ca){
    this->Question = q;
    this->Answer1 = a1;
    this->Answer2 = a2;
    this->Answer3 = a3;
    this->Answer4 = a4;
    this->correctAnswer = ca;
}
string Trivia::getQuestion(){
    return this->Question;
}
string Trivia::getAnswer1(){
    return this->Answer1;
}
string Trivia::getAnswer2(){
    return this->Answer2;
}
string Trivia::getAnswer3(){
    return this->Answer3;
}
string Trivia::getAnswer4(){
    return this->Answer4;
}
int Trivia::getCorrectAnswer(){
    return this->correctAnswer;
}
