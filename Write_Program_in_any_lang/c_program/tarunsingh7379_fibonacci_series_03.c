/* 
  Name: Tarun Singh
	Program Name: Fibonacci Series
*/
/*###############Program Start###############*/
#include<stdio.h>
void fib(int n)
{
	int i,a=0,b=1,c;
	for(i=1;i<=n;i++)
	{
		printf("%d ",a);
		c=a+b;
		a=b;
		b=c;
	}
}
main()
{
	int n;
	printf("Enter the no. of terms of fibonacci series:\n");
	scanf("%d",&n);
	fib(n);
}
/*##################Program End##############*/
