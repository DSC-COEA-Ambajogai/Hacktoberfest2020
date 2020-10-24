Name: Siddhesh Bandgar
Program Name: Program to find Average of n Numbers 

#include<iostream>
using namespace std;

int main()
{
  cout<<"Enter the count of numbers: ";
  int n;
  cin>>n;
  int t = n;
  float sum = 0;
  while(t--)
  {
    int a;
    cin>>a;
    sum+=a;
  }
  sum = sum*1.0/n;
  cout<<"Average of the given n numbers is: "<<sum;
  return 0;
}
