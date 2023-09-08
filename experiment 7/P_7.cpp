/*7. Write a C++ program to find the reverse of an array.*/

#include <iostream>
using namespace std;
int main(){


    int n,temp,i,arr[100];



    cout<<"Enter the size of array: ";
    cin>>n;

    cout<<"Enter the elements: ";
    for(i=0; i<n; i++){
    cin>>arr[i]; }

    for(i = 0; i<n/2; i++){
        temp = arr[i];

        arr[i] = arr[n-i-1];

        arr[n-i-1] = temp;
    }


    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}

