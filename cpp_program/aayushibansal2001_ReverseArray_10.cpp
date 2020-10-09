#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    //Taking input from the user
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //Reversing the array
    for(int i=0;i<n/2;i++)
    {
        swap(a[i],a[n-i-1]);
    }
    //Printing the resulted array
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
