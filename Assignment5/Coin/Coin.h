#include <iostream>
using namespace std;

class Coin
{
private:
    /* data */
    string sideUp;
public:
    Coin();
    Coin(string sideUp);
    
    void setSideUp(string sideup);
    string getSideUp();
    void toss();
};