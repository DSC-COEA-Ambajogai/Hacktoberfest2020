/*       
          Name: Mohak Maheshwari
          Program Name : Fibonacci Series Program   (as per list)                           
*/

/*###########################Program start################################## */

#include <stdio.h>

int main()
{
    int a=0,b=1,c,i,n;    
 printf("Enter the number of elements: ");    
 scanf("%d",&n);   
 printf("%d %d ",a,b); //printing 0 and 1    
 for(i=2;i<n;i++) //loop starts from 2 because 0 and 1 are already printed    
 {    
  c=a+b;;    
  printf("%d ",c);  
  a=b;    
  b=c;    
 }    
   return 0;  
}
/*###########################Program End################################## */




#include<stdio.h>
int main()
{
          int a,b,c,i,n;
          n=4;
          a=b=1;
          printf("%d%d",a,b);
          for(i=1;i<n-2;i++)
          {
                    c=a+b;
                    printf("%d",c);
                    a=b;
                    b=c;
          }
          return 0;
}
          
          
