/*8. Write a C++ program to insert an element into an array*/

#include <iostream>
using namespace std;

int main()
{
  int arr[1000], size, i, insert, count = 0;

  cout << "Enter the size of an array : ";
  cin >> size;

  cout << "Enter array elements:\n";
  for (i = 0; i < size; i++)
    cin >> arr[i];

  cout << "\nEnter element to be inserted: ";
  cin >> insert;

  arr[i] = insert;

  //Display new array
  cout << "New Array after Insertion:\n";
  for (i = 0; i < (size+1); i++)
      cout << arr[i] << " ";

  return 0;
}
