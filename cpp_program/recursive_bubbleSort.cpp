
#include <bits/stdc++.h>
using namespace std;
//implement bubble sort

void
bubbleSort (int arr[], int n)
{
  // Base case
  if (n == 1)
    return;

  for (int i = 0; i < n - 1; i++)
    if (arr[i] > arr[i + 1])
      swap (arr[i], arr[i + 1]);

  bubbleSort (arr, n - 1);
}



// Driver program to test above functions
int
main ()
{
  int arr[100], n;
  cout << "Enter no. of elements";
  cin >> n;
  cout << "Enter the elements";
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  cout << endl;
  cout << "Original Array:";
  for (int i = 0; i < n; i++)
    printf ("%d ", arr[i]);
  printf ("\n");

  bubbleSort (arr, n);
  printf ("Sorted array : \n");
  /*  to print array */
  for (int i = 0; i < n; i++)
    printf ("%d ", arr[i]);
  printf ("\n");
  return 0;
}  
