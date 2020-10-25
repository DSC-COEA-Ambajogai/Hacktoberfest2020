/*       
          Name: Abhishek Jaiswal
          Program Name : Simplest and Efficient Way to Reverse the Arrays                          
*/

/*###########################Program Starts################################## */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Entter the length of Array :";
    cin >> n;
    int arr[n];
    cout << "Enter the array one-by-one :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Array in Reverse order is : "; 
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }cout<<endl;
}
/*###########################Program End################################## */