/*       
          Name: Shubhendu Mishra
          Program Name : print first n prime numbers                           
*/

/*###########################Program start################################## */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,k;
    printf("HOW MANY PRIME NUMBERS DO YOU WANT?");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        if(i==0||i==1)
            continue;
        int flag=1;
        for(k=2;k<=i/2;k++)
        {
            if(i%k==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
            printf("%d\t", i);

    }
    return 0;
}
/*###########################Program End################################## */