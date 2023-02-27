#include <iostream>
#include <math.h>
using namespace std;

int quadraticEquation(float a, float b, float c, float &x1, float &x2){
    float delta = b*b - 4*a*c;

    if (delta < 0){
        return 0;
    }else if (delta == 0)
    {
        x1 = x2 = -b / (2*a);
        return 1;
    }else{
        delta = sqrt(delta);
        x1 = (-b + delta) / (2*a);
        x2 = (-b - delta) / (2*a);
        return 2;
    }
    
}

int main(){
    float a, b, c;
    float x1, x2;

    cout<<"Input a (a != 0) : ";
    while(!(cin >> a) || (a == 0))
    {
        cout << "a must be different from 0"
             << endl;
        cin.clear();
    }
    cout<<"Input b : ";
    cin>>b;
    cout<<"Input c : ";
    cin>>c;
    int res =  quadraticEquation(a,b,c,x1,x2);
    if (res == 0)
    {
        /* code */
        cout<<"The equation has no solution";
    }else if (res == 1)
    {
        /* code */
        cout<<"The equation with double solution x = %.4f"<<x1;
    }else
    {
        /* code */
        cout<<"The The equation has 2 distinct solutions"<<endl;
        cout<<"x1 = "<<x1<<endl;
        cout<<"x2 = "<<x2;
    }
    
    
    
}