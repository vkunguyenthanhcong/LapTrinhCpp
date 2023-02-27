#include <iostream>

using namespace std;

int * reverse(int a[],int n)//function to reverse the array.

{
   int i;
   for(i=0;i<n/2;i++)
   {
       int temp=a[i];
       a[i]=a[n-i-1];
       a[n-i-1]=temp;
   }
   return a;//return pointer to the array.
}
int main() {
   int array[50],* arr,N;//declaring three variables.
   cout << "Enter the number of elements: ";
   cin >> N;//taking input of size..
   if(N>50||N<0)//if size greater than 50 or less than 0 then terminating the program..
   return 0;
   for(int i=0;i<N;i++)
   {
    cout << "Element number " << i+1 << ": ";
    cin>>array[i];//prompting array elements..
   }
   arr=reverse(array,N);//function call.
   cout << "Sorted Array : ";
   for(int i=0;i<N;i++)
   cout<<arr[i]<< " ";//printing reversed array..
   cout<<endl;
return 0;
}