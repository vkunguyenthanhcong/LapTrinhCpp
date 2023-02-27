#include <iostream>
using namespace std;

int main(){
    int speed, hours, distance;
    cout<<"Input your speed";
    while(!(cin >> speed) || (speed < 0))
    {
        cout << "ERROR: number of speed must be \n"
             << "more than 0 \n"
             << endl;
        cin.clear();
    }
    cout<<"Input your hours traveled?";
    while(!(cin >> hours) || (hours < 1))
    {
        cout << "ERROR: number of hours traveled must be \n"
             << "more than 1 \n"
             << endl;
        cin.clear();
    }
    cout << "Hour   Distance Traveled" << endl;
    cout << "------------------------" << endl;
    for (int i = 1; i <= hours; i++){
        distance = speed * i;
        cout<<i<<"       "<<distance<<endl;
    }
return 0;
}