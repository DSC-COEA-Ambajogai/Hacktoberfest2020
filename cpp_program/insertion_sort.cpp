// program for Insertion Sort

#include <bits/stdc++.h> 

using namespace std; 

  

void insertionSort(int arr[], int n)  

{  

    int i, k, j;  

    for (i = 1; i < n; i++) 

    {  

        k= arr[i];  

        j = i - 1;  

  

        /* Move elements of arr[0..i-1], that are  

        greater than k, to one position ahead  

        of their current position */

        while (j >= 0 && arr[j] > k) 

        {  

            arr[j + 1] = arr[j];  

            j = j - 1;  

        }  

        arr[j + 1] = k;  

    }  

}  

/* Driver code */

int main()  

{  

    int n,i,arr[100];

    cout<<"Enter no. of Elements:"<<endl;

    cin>>n;

    cout<<"Enter elements:"<<endl;

    for (i = 0; i < n; i++) 

     cin>>arr[i];

//Original Array:

cout<<"Original Arrray:"<<endl;

for (i = 0; i < n; i++)  

     cout << arr[i] << " ";  

    cout << endl; 

    insertionSort(arr, n); 

    

    cout<<"Sorted Arrray:"<<endl;

    //print sorted array..

    for (i = 0; i < n; i++)  

     cout << arr[i] << " ";  

    cout << endl; 

  

    return 0;  

}  
