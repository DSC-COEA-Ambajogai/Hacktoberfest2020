#include<stdio.h>
void swap(int *a,int *b)
{
	int temp = *a;
	*a  = *b ;
	*b  = temp;
}
void linearSort(int a[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	      for(j=i+1;j<n;j++)
		  if(a[i]>a[j])
	            	     swap(&a[i],&a[j]);
}
int main()
{
	int n,i;
	printf("Enter no of elements.\n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	linearSort(a,n);
	printf("The sorted array is...\n");
	for(i=0;i<n;i++)
	 printf("%d ",a[i]);
 return 0;	   
}
