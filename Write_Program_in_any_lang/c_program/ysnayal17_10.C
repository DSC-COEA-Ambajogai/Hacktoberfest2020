/*
	Name: Yogesh Singh Nayal
	Program Name: Reverse an Array
*/

/*###################Program Start#####################*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int A[100], n, i ;
	clrscr() ;
	printf("Enter number of array elements: ") ;
	scanf("%d", &n) ;
	printf("Enter the array elements: \n") ;
	for(i = 0 ; i < n ; i++)
	{
		scanf("%d", &A[i]) ;
	}
	printf("The reverse array is: \n") ;
	for(i = n-1 ; i >= 0 ; i--)
	{
		printf("%d ", A[i]) ;
	}
	getch() ;
}

/*#########################Program End##################*/
