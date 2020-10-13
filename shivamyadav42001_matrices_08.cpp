#include<iostream> 
using namespace std; 
main()
{
int i,j,a,b, first[10][10], second[10][10], sum[10][10], subtract[10][10];
cout << "Enter the number of rows and columns of matrix : "<<endl;
cin >> a >> b;
cout << "\nEnter the elements of first matrix : "<<endl;
for (i=0;i<a;i++ )
{
for (j=0;j<b;j++ )
{
cin >> first[i][j];
}
}
cout << "Enter the elements of second matrix\n"<<endl;
for (i= 0 ;i< a ;i++ )
{
for (j= 0;j<b;j++ )
{
cin >> second[i][j];
}
}
for (i=0;i< a;i++ )
{
for (j=0;j<b;j++ )
{
sum[i][j] = first[i][j] + second[i][j];
subtract[i][j] = first[i][j] - second[i][j];
}
}
cout << "\nSum of entered matrices : "<<endl;
for (i=0 ; i < a ; i++ )
{
for ( j = 0 ; j < b ; j++ )
{
cout << sum[i][j] << "\t";
cout << endl;
}
}
cout << "\nSubtraction of entered matrices : "<<endl;
for (i=0 ; i < a ; i++ )
{
for ( j = 0 ; j < b ; j++ )
{
cout << subtract[i][j] << "\t";
cout << endl;
} 
}
return 0;
}