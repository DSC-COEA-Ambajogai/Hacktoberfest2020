#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	int val;
	struct Node* prev;
	struct Node*next;
}node;

node* createNode(int);
void insertAtBeg(node**,int);
void insertAtEnd(node**, int);
void insertAtAnyPos(node**, int, int);
void display(node*);

int main(){
	node *head = NULL;
	insertAtBeg(&head, 10);
	insertAtBeg(&head, 20);
	insertAtBeg(&head, 30);
	insertAtEnd(&head, 40);
	insertAtEnd(&head, 50);
	insertAtAnyPos(&head, 100, 2);
	insertAtAnyPos(&head, 120, 4);
	insertAtAnyPos(&head, 150, 8);
	display(head);
	return 0;
}

node* createNode(int val){
	node *newNode = (node*)malloc(sizeof(node));
	newNode -> val = val;
	newNode -> prev = NULL;
	newNode -> next = NULL;

	return newNode;
}

void insertAtBeg(node** head, int val){
	if(*head == NULL){
		node* newNode = createNode(val);
		(*head) = newNode;
		newNode -> next = newNode;
		newNode -> prev = newNode;
		//printf("*");
	}
	else{
		//printf("~");
		node* newNode = createNode(val);
		newNode -> prev = (*head) -> prev;
		((*head) -> prev) = newNode;
		newNode -> next  = (*head);
		(*head) = newNode;
		(newNode -> prev) -> next = newNode;
		//printf("#");
	}
}

void insertAtEnd(node** head, int val){
	if((*head) == NULL){
		insertAtBeg(head, val);
	}
	else{
		node* newNode = createNode(val);
		((*head) -> prev)->next = newNode;
		newNode -> prev  = (*head) -> prev;
		(*head) -> prev  = newNode;
		newNode -> next = (*head);
	}
}

void insertAtAnyPos(node** head, int val, int pos){
	node* temp = (*head);
	if(pos == 1){
		insertAtBeg(head, val);
	}
	else{
		node* newNode = createNode(val);
		int flag = 0;
		int count = 1;
		while(temp -> next != (*head)){
			count++;
			if(count == pos){
				newNode -> prev = temp;
				newNode -> next = temp -> next;
				(temp -> next) -> prev = newNode;
				temp -> next = newNode;
				flag = 1;
				break;
			}
			temp = temp -> next;
		}
		if(flag == 0 && (count + 1) == pos){
			insertAtEnd(head, val);
		}
		else if(flag == 0 && (pos > count+1)){
			printf("Can't find position");
		}
	}
}

void display(node* head){
	node* temp = head;
	//head = head -> next;
	//printf("%d ",head -> val);
	//printf("%d", (head -> next);
	//printf("\n%d",temp);	
	while (head -> next != temp){
		printf("%d\n", head -> val);
		head = head -> next;
	}
	printf("%d", head -> val);
	// printf("%d", (temp -> prev) -> val);
	// printf("%d", ((temp -> prev)->next) -> val);
}
