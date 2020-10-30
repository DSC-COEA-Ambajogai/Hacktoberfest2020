#include<stdio.h>

int findGCD(int num1,int num2);
int main()
{
  int num1,num2,gcd;
  printf("\n\n Recursion : Find GCD of two numbers :\n");
  printf("------------------------------------------\n");  
  printf(" Input 1st number: ");
  scanf("%d",&num1);
  printf(" Input 2nd number: ");
  scanf("%d",&num2);
  
  gcd = findGCD(num1,num2);
  printf("\n The GCD of %d and %d is: %d\n\n",num1,num2,gcd);
  return 0;
}

int findGCD(int a,int b)
{
     while(a!=b)
     {
          if(a>b)
              return findGCD(a-b,b);
          else
             return findGCD(a,b-a);
     }
     return a;
}
