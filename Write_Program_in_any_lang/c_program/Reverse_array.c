/*       
          Name: HARI OM
          Program Name : Reverse an array                         
*/

/*###########################Program start################################## */

#include <stdio.h>

int main()
{
    int n, i, temp;
    printf("Enter the total number : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter number :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    printf("Reversed array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}

/*###########################Program End################################## */
