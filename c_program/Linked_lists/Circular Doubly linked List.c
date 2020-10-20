// Write a program to create a circular doubly linked list
//  of integers.Add an integer and delete an integer(at any position)
//   from the list and display the contents on the screen.

#include <stdio.h>
#include <stdlib.h>
typedef struct Node DLL;
struct Node
{
    int value;
    DLL *prev;
    DLL *next;
} *head = NULL;

int read_no_of_nodes();
int read_element();
void insert_end(DLL **, int);
void traverse_dll(DLL *);
int read_x();

void insert_after_x(DLL *, int, int);
void delete_x(DLL **, int);

int main()
{

    int n, i, s, x;
    n = read_no_of_nodes(); // length of linked list

    printf("Enter elements : ");

    for (int i = 0; i < n; i++) // reading elements
    {
        s = read_element();
        insert_end(&head, s);
    }
    traverse_dll(head);

    printf("\n");

    printf("New Value to be inserted after : "); // insert new value after given node
    x = read_x();

    printf("Enter value to insert After %d : ", x);
    s = read_element();
    insert_after_x(head, s, x);
    traverse_dll(head);

    printf("\n");
    printf("Value to be Deleted : "); // deleting given value
    x = read_x();

    delete_x(&head, x);
    traverse_dll(head);
}

int read_no_of_nodes()
{
    int length;
    printf("Enter Number of nodes in linked list : ");
    scanf("%d", &length);
    return length;
}

int read_element()
{
    int ele;
    scanf("%d", &ele);
    return ele;
}

void insert_end(DLL **h, int val)
{
    DLL *new_node, *temp;
    new_node = (struct Node *)malloc(sizeof(DLL *));
    new_node->value = val;
    new_node->next = NULL;
    new_node->prev = NULL;

    if (*h == NULL)
    {
        *h = new_node;
        new_node->prev = new_node;
        new_node->next = new_node;
        return;
    }

    temp = *h;
    new_node->next = *h;
    new_node->prev = (*h)->prev;
    (*h)->prev->next = new_node;
    (*h)->prev = new_node;
}

void traverse_dll(DLL *h)
{

    int i;
    DLL *t;
    if (h == NULL)
        printf("\nList is empty");
    else
    {
        printf("\nThe elements in list are...\n");
        t = h;
        printf("%d\n", t->value);
        t = t->next;
        while (t != h)
        {
            printf("%d\n", t->value);
            t = t->next;
        }
    }
}

int read_x()
{
    int n;

    scanf("%d", &n);
    return n;
}

void insert_after_x(DLL *h, int s, int x)
{
    DLL *new_node;
    new_node = (struct Node *)malloc(sizeof(DLL *));
    new_node->value = s;
    new_node->prev = NULL;
    new_node->next = NULL;

    if (h == NULL)
    {
        printf("List is empty insertion not possible");
        return;
    }

    DLL *temp;
    temp = h;

    while ((temp->value != x) && (temp->next != h))
    {
        temp = temp->next;
    }

    if (temp->value != x)
    {
        printf("Given element not found");
        return;
    }

    new_node->prev = temp;
    new_node->next = temp->next;
    temp->next = new_node;

    new_node->next->prev = new_node;
}

void delete_x(DLL **h, int x)
{

    if (*h == NULL)
    {
        printf("List is empty deletion not possible");
        return;
    }
    struct Node *temp = *h;

    while (temp->value != x && temp->next != (*h))
    {
        temp = temp->next;
    }

    if (temp->value != x)
    {
        printf("Deletion not possible");
        return;
    }

    if (temp->prev == *h && temp->next == (*h))
    {

        *h = NULL;
        free(temp);
        return;
    }

    if (temp == *h)
    {
        *h = (*h)->next;
        (*h)->prev = temp->prev;
        temp->prev->next = (*h);
        free(temp);
        return;
    }

    if (temp->next == (*h))
    {
        temp->prev->next = *h;
        temp->next->prev = temp->prev;
        free(temp);
        return;
    }

    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    free(temp);
}