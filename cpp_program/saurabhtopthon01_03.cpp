// Name: Saurabh Kumar Singh 
// Program: Fibonacci Series

// ################# Fibonacci Series #################

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the length of series: ";
    cin>>n;
    int a=0,b=1;
    cout<<"Fibonacci series: ";
    cout<<a<<" "<<b<<" ";
    for (int i = 0; i < n-2; i++)
    {
        int temp=0;
        temp=a+b;
        cout<<temp<<" ";
        a=b;
        b=temp;
    }
    return 0;   
}

// ################# program end #################