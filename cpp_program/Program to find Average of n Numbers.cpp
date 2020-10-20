/*    
       Name: Kannu Priya
       Program Name : Program to find Average of n Numbers
*/
/*###########################Program to find Average of n Numbers################################## */

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++)
    cin >> array[i];
    
    int sum = 0;
    for(int i = 0; i < n; i++)
     sum = sum + array[i];
     
     int average = sum / n;
     cout << average;
    return 0;
}
/*###########################Program End################################## */
