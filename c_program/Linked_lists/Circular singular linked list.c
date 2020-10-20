// Write a program to create a circular singly linked list of
//  integers.Add an integer and delete an integer(at any position)
//   from the list and display the contents on the screen.

#include <stdio.h>
#include <stdlib.h>
typedef struct Node SLL;
struct Node
{
    int value;

    SLL *next;
} *head = NULL;

int read_no_of_nodes();
int read_element();
void insert_end(SLL **, int);
void traverse_SLL(SLL *);
int read_x();

void insert_after_x(SLL *, int, int);
void delete_x(SLL **, int);

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
    traverse_SLL(head);

    printf("\n");

    printf("New Value to be inserted after : "); // insert new value after given node
    x = read_x();

    printf("Enter value to insert After %d : ", x);
    s = read_element();
    insert_after_x(head, s, x);
    traverse_SLL(head);

    printf("\n");
    printf("Value to be Deleted : "); // deleting given value
    x = read_x();

    delete_x(&head, x);
    traverse_SLL(head);
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

void insert_end(SLL **h, int val)
{
    SLL *new_node, *temp;
    new_node = (struct Node *)malloc(sizeof(SLL *));
    new_node->value = val;
    new_node->next = NULL;

    if (*h == NULL)
    {
        *h = new_node;

        new_node->next = new_node;
        return;
    }

    temp = *h;
    while (temp->next != *h)
    {
        temp = temp->next;
    }
    temp->next = new_node;
    new_node->next = *h;
}

void traverse_SLL(SLL *h)
{

    int i;
    SLL *t;
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

void insert_after_x(SLL *h, int s, int x)
{
    SLL *new_node;
    new_node = (struct Node *)malloc(sizeof(SLL *));
    new_node->value = s;

    new_node->next = NULL;

    if (h == NULL)
    {
        printf("List is empty insertion not possible");
        return;
    }

    SLL *temp;
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

    new_node->next = temp->next;
    temp->next = new_node;
}

void delete_x(SLL **h, int x)
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

    if (temp == *h)
    {

        SLL *temp1 = *h;
        while (temp1->next != (*h))
        {
            temp1 = temp1->next;
        }
        *h = (*h)->next;
        temp1->next = (*h);
        free(temp);

        return;
    }

    if (temp->next == (*h))
    {
        SLL *ptr = (*h);
        while (ptr->next != temp)
        {
            ptr = ptr->next;
        }
        ptr->next = *h;

        free(temp);
        return;
    }
    SLL *ptr = (*h);
    while (ptr->next != temp)
    {
        ptr = ptr->next;
    }
    ptr->next = temp->next;

    free(temp);
}