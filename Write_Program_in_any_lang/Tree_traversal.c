#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int val;
    struct Node *next;
}node;

void matInp(int***, int );
void matDisplay(int**, int);
void dfs(int**, int, node **, int *);
void stackPush(node**, int );
void stackPop(node **);
void insertQueue(node**, int);
void delQueue(node**);

int main(){
    node* head = NULL;
    int *visitedNode;
    int **arr;
    int n;
    printf("\nEnter the size of square matrix :- ");
    scanf("%d",&n);
    matInp(&arr,n);
    // matDisplay(arr,n);
    stackPush(&head, 0);
    visitedNode = (int *)malloc(sizeof(int));
    visitedNode[0] = 1;
    dfs(arr, n, &head,visitedNode);
}

void matInp(int ***arr, int n){
    int i,j;
    *arr = (int**)malloc(n*sizeof(int*));
    for(i = 0; i < n; i++){
        (*arr)[i] = (int*)malloc(n* sizeof(int));
    }
    i = 0;
    while(i < n){
        for(j = 0; j < n; j++){
            // printf("\nEnter the [%d][%d] element ", i, j);
            scanf("%d", &(*arr)[i][j]);
        }
        i++;
    }
}

void matDisplay(int **arr, int n){
    int i, j;
    printf("\n Your Input matrix is \n");
    for( i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%d    ",arr[i][j]);
        }
        printf("\n");
    }
}
void dfs(int **arr, int n, node **head, int *visitedNode){
    int i;
   if(*head == NULL) {
       return;
   } else {
       for(i = 0; i < n; i++) {
           if(arr[(*head)->val][i] == 1 && visitedNode[i] != 1) {
               stackPush(head, i);
               visitedNode[i] = 1;
               dfs(arr, n, head, visitedNode);
           }
       }
       printf("%d ", (*head)->val);
       stackPop(head);
   }
}

void stackPush(node **head, int k){
    node* newNode = (node*) malloc(sizeof(node));
    newNode ->val = k;
    newNode ->next = *head;
    *head = newNode;
}

void   stackPop(node **head){
    node* temp;
    temp = *head;
    if(*head == NULL){
        return;
    }
    *head = temp -> next;
    free(temp);
    // return 1;
}

