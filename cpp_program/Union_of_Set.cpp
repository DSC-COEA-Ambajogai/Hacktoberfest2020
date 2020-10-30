#include<bits/stdc++.h>
using namespace std;

void union_set(int a[10], int b[10], int m, int n);


int main()
{
    int i,j;
    int a[10], b[10];
    cout<<"Union of Sets\n";
    cout<<"----------------------------";
    cout<<endl;
    cout<<"Enter the length of setA: ";
    cin>>i;
    cout<<endl;
    cout<<"Enter the length of setB: ";
    cin>>j;
    cout<<endl;
   cout<<"Enter the elements of setA: ";
    for(int m = 0; m < i;m++)
    {
        cin>>a[m];
    }
    cout<<"Enter the elements of setB: ";
    for(int n = 0; n < j;n++)
    {
        cin>>b[n];
    }
    union_set(a,b,i,j);

}


void union_set(int a[10], int b[10], int m, int n)
{
    int c[20], k = 0, flag = 0;
    for(int i = 0; i < m; i++)
    {
        c[k] = a[i];
        k++;
    }
    for(int i = 0; i < n; i++)
    {
        flag = 0;
        for(int j = 0; j < m; j++)
        {
            if(b[i] == c[j])
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            if(b[i] != b[i+1]){
            c[k] = b[i];
            k++;
            }
        }
    }
    cout<<"Union of two sets: ";
    int temp;
    for(int i = 0; i < k; i++)
    {
        for(int j = i+1; j < k;j++)
        {
            if(c[i] > c[j])
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
    for(int i = 0; i < k; i++)
    {
        cout<<c[i]<<" ";
    }


}
