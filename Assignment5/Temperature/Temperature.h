#include <iostream>

using namespace std;

class Temperature
{
private:
    double Temp;
public:
    Temperature();
    Temperature(double temp);

    void setTemp(double temp);
    double getTemp();

    bool isEthylFreezing();
    bool isEthylBoiling();
    bool isOxygenFreezing();
    bool isOxygenBoiling();
    bool isWaterFreezing();
    bool isWaterBoiling();

    void display();
};
