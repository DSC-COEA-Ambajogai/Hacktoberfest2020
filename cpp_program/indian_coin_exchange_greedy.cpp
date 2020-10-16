#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count =0;
    int denom[]={2000,500,200,100,50,20,10,5,2,1};
    int no[10]={0};
    int p=0;
    while(n>0)
    {
         
         no[p]=n/denom[p];
         n=n%denom[p];
         p++;
         
    }
    for(int i=0;i<10;i++)
    {
       cout<<no[i]<<" "; 
       count+=no[i]; 
    }
    cout<<'\n'<<count;
}