#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int x,num,temp,sum=0;
	clrscr();
	printf("Enter any number_");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		x=num%10;
		sum=sum+pow(x,3);
		num=num/10;
	}
	if(temp==sum)
	printf("Number is Armstrong Number");
	else
	printf("Number is not Armstrong number");
	getch();
}
