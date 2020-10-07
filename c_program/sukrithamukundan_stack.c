/*STACK USING ARRAY*/
#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int s[MAX];
int top=-1;

void push(int item)
{
	if(top==MAX-1)
		printf("OVERFLOW\n");
	else
	{
		top=top+1;
		s[top]=item;
	}
}

void pop()
{
	if(top==-1)
		printf("UNDERFLOW\n");
	else
		top=top-1;
}

void display()
{
	for(int i=top;i>=0;i--)
		printf("%d\t",s[i]);
	printf("\n");
}

void main()
{
	int c,i,item;
	while(1)
	{
		printf("1.PUSH\t2.POP\t3.DISPLAY\t4.EXIT\n");
		printf("ENTER YOUR CHOICE\t");
		scanf("%d",&c);
		switch(c)
		{
			case 1 : printf("ENTER THE ELEMENT\t");
				 scanf("%d",&item);
				 push(item);printf("\n");break;
			case 2 : pop();printf("\n");break;
			case 3 : display();printf("\n");break;
			case 4 :exit(0);break;
			default :printf("\nINVALID CHOICE");
		}
	}
}

/*OUTPUT

1.PUSH	2.POP	3.DISPLAY	4.EXIT
ENTER YOUR CHOICE	1
ENTER THE ELEMENT	1

1.PUSH	2.POP	3.DISPLAY	4.EXIT
ENTER YOUR CHOICE	1
ENTER THE ELEMENT	2

1.PUSH	2.POP	3.DISPLAY	4.EXIT
ENTER YOUR CHOICE	1
ENTER THE ELEMENT	3

1.PUSH	2.POP	3.DISPLAY	4.EXIT
ENTER YOUR CHOICE	1
ENTER THE ELEMENT	4

1.PUSH	2.POP	3.DISPLAY	4.EXIT
ENTER YOUR CHOICE	3
4	3	2	1	

1.PUSH	2.POP	3.DISPLAY	4.EXIT
ENTER YOUR CHOICE	2

1.PUSH	2.POP	3.DISPLAY	4.EXIT
ENTER YOUR CHOICE	3
3	2	1	

1.PUSH	2.POP	3.DISPLAY	4.EXIT
ENTER YOUR CHOICE	2

1.PUSH	2.POP	3.DISPLAY	4.EXIT
ENTER YOUR CHOICE	3
2	1	

1.PUSH	2.POP	3.DISPLAY	4.EXIT
ENTER YOUR CHOICE	4*/