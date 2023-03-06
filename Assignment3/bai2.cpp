#include<iostream>
using namespace std;

int main(){
    int numElements, arr[10], *ptr, sum = 0;

    cout << "Input the number of elements to store in the array (max 10) : ";
    cin >> numElements;

    cout << "Input" << numElements << "number of elements in the array :\n";
    for (int i = 0; i < numElements; i++)
    {
        cout << "element - " << i+1 << " : ";
        cin >> arr[i];
    }

    ptr = arr;

    for (int i = 0; i < numElements; i++)
    {
        sum += *ptr;
        ptr++;
    }
    cout << "Expected Output :\n";
    cout << "\nThe sum of array elements is: " << sum << "\n";

    return 0;
    
    
}