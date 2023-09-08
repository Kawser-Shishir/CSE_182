/*2. Write a C++ program to find the second largest element in an array*/

#include<iostream>

using namespace std;
int main()
{
   int i, arr[10], large, slarge;
   cout<<"Enter  Array Elements(5): ";
   for(i=0; i<5; i++)
      cin>>arr[i];
   large = arr[0];
   for(i=0; i<5; i++)
   {
      if(large<arr[i])
         large = arr[i];
   }
   slarge = arr[0];
   for(i=0; i<5; i++)
   {
      if(slarge<arr[i])
      {
         if(arr[i]!=large)
            slarge = arr[i];
      }
   }
   cout<<"\nSecond Largest Element = "<<slarge;
   cout<<endl;
   return 0;
}
