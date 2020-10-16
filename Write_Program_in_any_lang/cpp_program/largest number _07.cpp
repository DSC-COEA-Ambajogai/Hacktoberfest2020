/*       
          Name: HARI OM
          Program Name : Largest among n Numbers
*/

/*###########################Program Name################################## */

#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter the total number : ";
    cin >> n;             //taking total number of input
    int *ar = new int[n]; // allocating memory dynamically
    cout << "Enter number :\n";
    for (i = 0; i < n; i++)
        cin >> ar[i];  //taking input
    int large = ar[0]; //first I inititalise 1st element as largest number
    for (i = 1; i < n; i++)
    {
        if (large < ar[i])  //comparing
        {                  
            large = ar[i]; //if it true then large value changes
        }
    }
    cout << "Largest number among " << n << " number is : " << large << endl;
    return 0;
}

/*###########################Program End################################## */