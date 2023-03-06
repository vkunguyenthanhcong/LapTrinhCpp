#include<iostream>
using namespace std;

int main(){
    int num1, num2, *ptr1, *ptr2, temp;

    cout << "Input the value of 1st element : ";
    cin >> num1;
    cout << "Input the value of 2nd element : ";
    cin >> num2;

    cout << "\nExpected Output :\n";
    cout << "\nThe value before swapping are : \n";

    cout << "element 1 = " << num1 << "\n";
    cout << "element 2 = " << num2 << "\n";
    
    ptr1 = &num1;
    ptr2 = &num2;

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    cout << "\nThe value after swapping are: \n";

    cout << "element 1 = " << num1 << "\n";
    cout << "element 2 = " << num2 << "\n";

    return 0;
}