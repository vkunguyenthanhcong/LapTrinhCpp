#include "Coin.h"
#include <random>
#include <ctime>

Coin::Coin(){
    srand(time(0));
    int Number = rand() % 2;
    if (Number == 0)
    {
        this->sideUp = "heads";
    }else
    {
        this->sideUp = "tails";
    }
};
Coin::Coin(string sideup){
    this->sideUp = sideup;
}

string Coin::getSideUp(){
    return this->sideUp;
}
void Coin::setSideUp(string sideup){
    this->sideUp = sideup;
}

void Coin::toss(){
    int Number = rand() % 2;
    if (Number == 0)
    {
        this->sideUp = "heads";
    }else
    {
        this->sideUp = "tails";
    }
}
