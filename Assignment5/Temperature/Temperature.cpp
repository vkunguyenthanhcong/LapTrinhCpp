#include "Temperature.h"

Temperature::Temperature(){};
Temperature::Temperature(double temp){
    this->Temp = temp;
}
double Temperature::getTemp(){
    return this->Temp;
}
void Temperature::setTemp(double temp){
    this->Temp = temp;
}

bool Temperature::isEthylFreezing(){
    if (this->Temp <= -173)
    {
        /* code */
        return true;
    }else
    {
        /* code */
        return false;
    }
}
bool Temperature::isEthylBoiling(){
    if (this->Temp >= 172)
    {
        /* code */
        return true;
    }else
    {
        /* code */
        return false;
    }
}
bool Temperature::isOxygenFreezing(){
    if (this->Temp <= -362)
    {
        /* code */
        return true;
    }else
    {
        /* code */
        return false;
    }
}
bool Temperature::isOxygenBoiling(){
    if (this->Temp >= -306)
    {
        /* code */
        return true;
    }else
    {
        /* code */
        return false;
    }
}
bool Temperature::isWaterFreezing(){
    if (this->Temp <= 32)
    {
        /* code */
        return true;
    }else
    {
        /* code */
        return false;
    }
}
bool Temperature::isWaterBoiling(){
    if (this->Temp >= 212)
    {
        /* code */
        return true;
    }else
    {
        /* code */
        return false;
    }
}

void Temperature::display(){

}