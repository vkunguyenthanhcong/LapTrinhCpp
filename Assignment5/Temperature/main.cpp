#include "Temperature.cpp"
#define FALSE 0
#define TRUE 1

main(){
    double T;
    cout<<"Input temperature: "<<endl;
    cin>>T;
    Temperature temperature;
    temperature.setTemp(T);
    
    cout<<"With temperature is : "<<T<<" || ";
    cout<<boolalpha;
    if (temperature.isEthylFreezing())
    {
        cout<<"Ethyl Alcohol will freeze ";
        cout<<"and ";
    }else if (temperature.isEthylBoiling())
    {
        cout<<"Ethyl Alcohol will boil ";
        cout<<"and ";
    }
    
    if (temperature.isOxygenFreezing())
    {
        cout<<"Oxygen will freeze ";
        cout<<"and ";
    }else if (temperature.isOxygenBoiling())
    {
        cout<<"Oxygen will boil ";
        cout<<"and ";
    }

    if (temperature.isWaterFreezing())
    {
        cout<<"Water will freeze ";
    }else if (temperature.isWaterBoiling())
    {
        cout<<"Water will boil ";
    }
    return 0;
}