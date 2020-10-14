
#include <iostream>

using namespace std;
void binarySort(int arr[], int n){
    int i, j;
    
    for(i = 0; i < n; i++){
        for(j = 0; j < n-i-1; j++){
            if(arr[j] > arr[1 + j]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"After Sorting: "<<endl;
    for(i = 0; i < n; i++)
    cout << arr[i]<<" ";
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int *arr = new int[n];
    cout<<"Enter the elements:"<<endl;
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout <<"Before Sorting: "<<endl;
    for(int i = 0; i < n; i++)
    cout <<arr[i]<<" ";
    cout<<endl;
    
    binarySort(arr, n);

    return 0;
}
