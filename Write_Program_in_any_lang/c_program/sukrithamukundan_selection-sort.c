/*       
          Name: Sukritha KK
          Program Name : selection-sort                           
*/

/*###########################Program start################################## */

/*OUTPUT
enter the size of the array
5
enter the elements of the array
5
4
1
8
9
the sorted array is
1	4	5	8	9*/

/*selection sort*/
#include<stdio.h>
void main()
{
	int A[100];
	int i,j,n,temp,min;
	printf("enter the size of the array\n");
	scanf("%d",&n);
	printf("enter the elements of the array\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	for (i=0;i<=n-1;i++)
	{
		min=A[i];
		for(j=i+1;j<n;j++)
		{
			if(A[j]<A[i])
			{
				temp=A[j];
				A[j]=A[i];
				A[i]=temp;
			}
		}
	}
	printf("the sorted array is\n");
	for (i=0;i<n;i++)
	{
		printf("%d\t",A[i]);
	}
}	

/*###########################Program End################################## */
