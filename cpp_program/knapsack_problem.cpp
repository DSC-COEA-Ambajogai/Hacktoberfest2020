#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n,i,j,W;
    cout<<"Enter number of items\n";
    cin>>n;
    ll v[n]; //Values of bags
    cout<<"Enter values of the items\n";
    for(i=0;i<n;i++)
        cin>>v[i];
    ll w[n];
    cout<<"Enter weights of the items\n";
    for(i=0;i<n;i++)
        cin>>w[i];
    cout<<"Enter Capacity of Bag\n";
    cin>>W;
    ll dp[n+1][W+1];
    memset(dp,0,sizeof(dp));
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=W;j++)
        {
            if(j>=w[i-1])
                dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i-1]]+v[i-1]);
            else
                dp[i][j]=dp[i-1][j];
        }
    }
    cout<<"Maximum profit that can be earnt is: "<<dp[n][W];
    return 0;
}