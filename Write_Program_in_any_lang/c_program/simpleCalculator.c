
#include<stdio.h>
int main()
{   int a,b,ch;
    float f; 
    printf("\n Program for simple calculator");
    printf("\n enter 2 numbers:");
    scanf("%d%d",&a,&b);
    printf("\n select choice :\n 1.add\n2.sub\n3.Div\n4.Mul");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printf("addition is :%d",a+b);
        break;

        case 2:
        printf("\n subtraction: %d",a>b?a-b:b-a);
        break;

        case 3:
        printf("\n Division : %f",f=a>b?(a/b):(b/a));
        break;

        case 4:
        printf("\n Multiplication:%d",a*b);
        break;

        default:
        printf("\n Invalid  Choice");
    }
    return 0;
}