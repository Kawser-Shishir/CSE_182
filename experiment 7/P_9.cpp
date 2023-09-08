/*9. Write a C++ program to delete an element from an array*/


#include <iostream>
using namespace std;

int main()
{
  int arr[30], n, i, delElem, count = 0;

  cout << "Enter the size of an array : ";
  cin >> n;

  cout << "Enter array elements:\n";
  for (i = 0; i < n; i++)
    cin >> arr[i];

  cout << "\nEnter element to be delete: ";
  cin >> delElem;

  for (i = 0; i < n; i++)
  {
    if (arr[i] == delElem)
    {
      for (int j = i; j < (n - 1); j++)
      {
        arr[j] = arr[j + 1];
      }

      count++;
      break;
    }
  }

  if (count == 0)
  {
    cout << "\nElement not found..!!\n";
  }
  else
  {



    cout << "New Array after Deletion:\n";
    for (i = 0; i < (n - 1); i++)
      cout << arr[i] << " ";
  }


  return 0;
}
