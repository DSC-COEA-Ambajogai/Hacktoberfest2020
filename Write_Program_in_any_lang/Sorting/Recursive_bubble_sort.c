#include <stdio.h>
#include<stdlib.h>
void bubblesort(int a[], int n)
{
    int i,temp;
    if (n==1)  //Base case
        return;
    //After this pass,the largest element is moved to end.
    for (i=0; i<n-1; i++) 
	{ //swapping array elements
        if (a[i]>a[i+1])
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    //recursion for remaining array elements
    bubblesort(a,n-1);
}
void print(int a[], int n)
{  //function to print the array
    int i;
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
}
int main()
{  
    int a[]={41,12,18,56,10,48,63,85,3,1};
    int n=10;
    printf("Array before sorting: \n");
    print(a,n);
    bubblesort(a,n); //calling bubblesort function to sort the array
    printf("Array after sorting: \n");
    print(a,n);
    return 0;
}