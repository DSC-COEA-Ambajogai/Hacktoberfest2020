/*       
          Name: Prabuddhi Sathyanka
          Program Name : Fibonacci Series Program                          
*/

/*###########################Fibonacci Series Program################################## */

#include<iostream.h>
using namespace std;

int main()
{
int n1=0,n2=1,no,next;

cout<<"Enter the number of terms";
cin>>no;

for(int i=1;i<=no;i++)
{

if(i==1)
{
cout<<n1;
continue;
}

if(i==2)

{
cout<<n2;
continue;
}

next=n1+n2;
n1=n2;
n2=next;

cout<<next<<"\t";
}



return 0;

}
/*###########################Program End################################## */
