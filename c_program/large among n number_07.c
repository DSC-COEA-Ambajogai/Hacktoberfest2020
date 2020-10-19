/*       
          Name: HARI OM
          Program Name : large among n number  
*/

/*###########################Program start################################## */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i;
    printf("Enter the total number : ");
    scanf("%d", &n); //taking total number of input
    int *ar;
    ar = (int *)malloc(sizeof(int)); // allocating memory dynamically
    printf("Enter number :\n");
    for (i = 0; i < n; i++)
        scanf("%d", &ar[i]); //taking input
    int large = ar[0];       //first I inititalise 1st element as largest number
    for (i = 1; i < n; i++)
    {
        if (large < ar[i])
        {                  //comparing
            large = ar[i]; //if it true then large value changes
        }
    }
    printf("Largest number among %d number is : %d", n, large);
}

/*###########################Program End################################## */