//Max of four in c
#include<stdio.h>
int main()
{
    int a,b,c,d;
    int max1,max2,max;
    printf("Enter four values for getting maximum from them :\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    max1=a>b?a:b;
    max2=c>d?c:d;
    max=max1>max2?max1:max2;
    printf("The maximum is %d",max);
    return 0;

}
