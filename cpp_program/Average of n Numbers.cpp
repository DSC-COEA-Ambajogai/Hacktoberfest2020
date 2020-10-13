/*       
          Name: HARI OM
          Program Name : Average of n Numbers                          
*/

/*###########################Program Name################################## */

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;         
    float avg;
    cout << "Enter total number : ";
    cin >> n;                //taking total number of element
    int *ar = new int[n];   // allocating memory
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        sum += ar[i];       //calculating the sum of all element
    }
    avg = (float)sum / n;   //return in float type after dividing
    cout << "Average of total " << n << " number is : " << avg << endl;
    return 0;
}

/*###########################Program End################################## */