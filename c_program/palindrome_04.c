/*       
          Name: kriti
          Program Name : palindrome    (as per list)                           
*/

/*###########################Program start################################## */

#include<stdio.h>
#include<math.h>
main()
{   
    int r=0,n;
	printf("enter the five digit no.");
	scanf("%d",&n);//54321
	int a=n;
    for(int i=4;i>=0;i--)
    {   int c=pow(10,i);
    	r=r+c*(a%10);
    	a=a/10;
	}
  printf("reverse no. =%d ",r);
    if(n==r)
    {
    	printf("both are equal");
	}
	else
	{
    	printf("both are not equal");
	}
	
}

/*###########################Program End################################## */
