#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter the total number : ";
    cin >> n;             
    int *ar = new int[n]; 
    cout << "Enter number :\n";
    for (i = 0; i < n; i++)
        cin >> ar[i];  
    int large = ar[0]; 
    for (i = 1; i < n; i++)
    {
        if (large < ar[i])  
        {                  
            large = ar[i]; 
        }
    }
    cout << "Largest number among " << n << " number is : " << large << endl;
    return 0;
}