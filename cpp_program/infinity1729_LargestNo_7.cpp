#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> v(arr,arr+n);
    cout<<*max_element(v.begin(),v.end());

    return 0;
}
