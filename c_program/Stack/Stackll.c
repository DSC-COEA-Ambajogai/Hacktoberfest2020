#include<stdio.h>
#include<conio.h>
#include<malloc.h> // to allocate memory to pointer type nodes
typedef struct Stack_LL
{
	int data;
	struct Stack_LL *next;
}node;
node *push(node *);
void disp(node *);
node *pop(node *);
void peep(node *,int);
void main()
{
	node *top=NULL;
	int ch,pos;
	clrscr();
	do
	{
		printf("\nEnter 1 to push\n2 to disp\n3 to pop\n4 to peep\n5 to exit\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				top=push(top);
				break;
			case 2:
				printf("\nStack contents\n");
				disp(top);
				break;
			case 3:
				top=pop(top);
				break;
			case 4:
				printf("Enter the position to be peeped:");
				scanf("%d",&pos);
				peep(top,pos);
		}

	}while(ch!=5);
	getch();
}
node *push(node *top)
{
	node *nnode=NULL;
	nnode=(node *)malloc(sizeof(node)); // to assign size to nnode
	printf("Enter the data to be pushed:");
	scanf("%d",&nnode->data);
	nnode->next=top;
	top=nnode;
	return top;
}
void disp(node *top)
{
	node *t=top;
	if(top==NULL)
	{
		printf("\nStack is empty!\n");
		return;
	}

	while(t!=NULL)
	{
		printf("%d ",t->data);
		t=t->next;
	}

}
node *pop(node *top)
{
	if(top==NULL)
	{
		printf("\nStack is underflown!\n");
		return top;
	}

	printf("\nThe deleted ele = %d",top->data);
	top=top->next;
	return top;
}
void peep(node *t,int p)
{
	int i=0;

	while(i<p-1)
	{
		t=t->next;
		i++;
		if(t==NULL)
		{
			printf("\nInvalid position\n");
			return;
		}

	}

	printf("\nThe peeped ele =%d",t->data);



}
