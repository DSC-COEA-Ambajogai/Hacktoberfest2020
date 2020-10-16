
/*
          Name: Apoorva Srivastava
          Program Name : Concatenate Strings using Pointer
*/

/*###########################Program start################################## */

#include <stdio.h>

int main()
{
    char s1[100],s2[100];
    printf("enter first string: ");
    gets(s1);
    printf("\nenter second string: ");
    gets(s2);
    char *x = s1;
    char *y = s2;
     while(*x)
    {
        x+=1;
    }
    while(*y)
    {
        *x = *y;
        y+=1;
        x+=1;
    }
    *x = '\0';
    printf("\nthe string after concatenation is: %s ", s1);
    return 0;

}
/*###########################Program End################################## */
