
/*3.Write a C++ program to count the total number of even and odd elements
in an array.*/

#include<iostream>

using namespace std;
int main()
{
   int arr[10], eve=0, odd=0, i;
   cout<<"Enter 6 Array Elements: ";
   for(i=0; i<6; i++)
      cin>>arr[i];
   for(i=0; i<6; i++)
   {
      if(arr[i]%2==0)
         eve++;
      else
         odd++;
   }
   cout<<"\nTotal Number of Even Numbers = "<<eve;

   cout<<"\nTotal Number of Odd Numbers = "<<odd;

   cout<<endl;
   return 0;
}
