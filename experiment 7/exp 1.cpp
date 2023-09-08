//A C++ Program to find the position of an element from the list of_elements. [Linear Search]
#include<iostream>
using namespace std;
int main()
{
int arr[15], n, i, to_search, loc;
cout<<"The number of elements: "<<endl;
cin>> n;
cout<<"Enter the numbers: "<<endl;
for (i = 0; i < n; i++){ //take array input
cin>> arr[i];
}
cout<<"Enter the searching element: ";
cin>> to_search; // the number you want to take input
loc = false; // Assume that element does not exist in the array
for (i = 0; i < n; i++){
if (arr[i] == to_search)
{
loc = true; // if the element is found then set True
break;
}
}
if (loc == true){
cout<<"The element "<<to_search<<" is found at location: "<<i+1;
}
else{
cout<<"The element "<<to_search<<" is not in the list."<<endl;
}
return 0;
}
