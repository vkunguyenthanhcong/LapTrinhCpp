#include <iostream>
#include <algorithm>
using namespace std;

double cal(int noe, double median, int array[]){
    int *ptr;
    ptr = array;
    int temp = noe/2;
    if (noe%2==0){
        median+=*ptr + (temp-1);
        median+=*ptr + temp;
        median/=2;
    }else{
        median+=*ptr + temp;
    }
    return median;
}

int main(int argc, char**){
    int noe;
    double median=0;
    cout << "Enter the number of elements: ";
    cin >> noe;

    int array[noe];
    for (int i = 0; i < noe; i++){
        cout << "Element number " << i+1 << ": ";
        cin >> array[i];
    }
    cout << "Array entered: ";
    for (int i = 0; i < noe; ++i) cout << array[i] << " ";

    sort(array,array+noe);
    cout << "Sorted Array : ";
    for (int i = 0; i < noe; ++i) cout << array[i] << " ";

    median = cal(noe,median,array);
    cout << "\nMedian: " << median;
    
    return 0;
}
