/*
          Name: Apoorva Srivastava
          Program Name : Reverse an Array
*/

/*###########################Program Name################################## */

#include <iostream>
#include<conio.h>

int main() {
	int a[50], s, i, j, temp;
	printf("Enter array size : ");
	scanf("%d",&s);
	printf("Enter array elements : ");
	for(i=0; i<s; i++)
	{
		scanf("%d",&a[i]);
	}
	j=i-1;
	i=0;
	while(i<j)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		i++;
		j--;
	}
	printf("Reverse of the Array is : \n");
	for(i=0; i<s; i++)
	{
		printf("%d",a[i]);
		printf(" ");
	}
}
/*###########################Program End################################## */
