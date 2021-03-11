/*       
          Name: Shrenik
          Program Name : Reverse an array                           
*/

/*###########################Program Name################################## */

#include <iostream>
using namespace std;

int main() 
{
    int size;
    cout << "Enter size of array:";
    cin>> size;
    int arr[size];
    cout<<"Enter "<< size <<" elements\n";
    for(int i=0;i<size;i++)
    {
    cin>>arr[i];
    } 
    cout<<"Reverse array\n";
    for(int i = size - 1;i > -1;i--)
    {
    cout<<arr[i]<<endl;
    }   
    return 0;
}
/*###########################Program End################################## */
