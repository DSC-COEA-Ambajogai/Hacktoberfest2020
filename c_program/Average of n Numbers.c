/*       
          Name: AKSHAT DESHWAL
          Program Name : Program to find Average of n Numbers
                         
*/

/*###########################Program start################################## */

#include<stdio.h>

int main()
{
    int n, i;
    float sum = 0, x , avg;

    printf("Enter total number of real numbers whose average is to be calculated :  ");
    scanf("%d", &n);
    printf("\nEnter %d numbers\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%f", &x);
        sum += x;
    }
    avg=sum/n;
    printf("\n\n\nAverage of the entered numbers is =  %f",avg );
    
    return 0;
}
