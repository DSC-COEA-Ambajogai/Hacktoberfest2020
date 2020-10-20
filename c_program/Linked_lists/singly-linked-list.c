//  Write a program to add, subtract, multiply two polynomials
//  using singly linked list. The node of your linked list should
//   hold two data vales one is coefficient and another one is exponent.
//    First create two linked lists representing two polynomials and for
//     each addition, subtraction and multiplication create separate polynomials.

#include <stdio.h>
#include <stdlib.h>
typedef struct Node SLL;
struct Node
{
    float coef;
    int exp;
    SLL *next;
} *head1 = NULL, *head2 = NULL;

int read_no_terms();
void read_polynomial(SLL **);
float read_coef();
int read_exp();
void insert_end(SLL **, float, int);
void traverse_sll(SLL *);
void addition_poly(SLL **, SLL *, SLL *);
void subtraction_poly(SLL **, SLL *, SLL *);
void multiplication_poly(SLL **, SLL *, SLL *);
SLL *add_power(SLL **, SLL *, SLL *);

int main()
{
    SLL *add = NULL, *sub = NULL, *mul = NULL;
    //First Polynomial
    read_polynomial(&head1);

    //Second Polynomial
    read_polynomial(&head2);

    //Addition
    addition_poly(&add, head1, head2);

    printf("\n");

    //Subtraction

    subtraction_poly(&sub, head1, head2);
    printf("\n");

    //Multiplication
    multiplication_poly(&mul, head1, head2);
}

int read_no_terms()
{
    int length;
    printf("Number of terms in Polynomial = ");
    scanf("%d", &length);
    printf("\nEnter coefficients and power respectively\n"); //Ex. 2 5 3 4 coef = 2,3 power = 5,4
    return length;
}

float read_coef()
{
    float number;
    scanf("%f", &number);
    return number;
}

int read_exp()
{
    int power;
    scanf("%d", &power);
    return power;
}

void read_polynomial(SLL **h)
{
    int n, exp;
    float coef;

    n = read_no_terms();

    for (int i = 0; i < n; i++)
    {
        coef = read_coef();
        exp = read_exp(); //exp=0 for Constant Term
        insert_end(h, coef, exp);
    }
    traverse_sll(*h);
}

void traverse_sll(SLL *h) // travelling through linked list
{
    int i;
    SLL *t;
    if (h == NULL)
        printf("\nList is empty");
    else
    {
        printf("\nPolynomial = ");
        t = h;
        while (t != NULL)
        {
            if (t->coef != 0)
            {
                printf("%.1f", t->coef);
                if (t->exp != 0)
                {
                    printf("X^%d", t->exp);
                }
                if (t->next != NULL)
                {
                    if (t->next->coef >= 0)
                    {
                        printf(" + ");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
            }

            t = t->next;
        }
        printf("\n\n");
    }
}

void insert_end(SLL **h, float value, int s) // inserting node at the end of SLL
{
    SLL *new_node, *temp;
    new_node = (struct Node *)malloc(sizeof(SLL *));
    new_node->coef = value;
    new_node->exp = s;
    new_node->next = NULL;

    if (*h == NULL)
    {
        *h = new_node;
        return;
    }

    temp = *h;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}

void addition_poly(SLL **res, SLL *poly1, SLL *poly2) //Addition of two polynomials
{

    SLL *res_node = (SLL *)malloc(sizeof(SLL *));

    res_node->next = NULL;
    *res = res_node;
    while (poly1 && poly2)
    {
        if (poly1->exp > poly2->exp)
        {
            res_node->coef = poly1->coef;
            res_node->exp = poly1->exp;
            poly1 = poly1->next;
        }
        else if (poly2->exp > poly1->exp)
        {
            res_node->coef = poly2->coef;
            res_node->exp = poly2->exp;
            poly2 = poly2->next;
        }
        else
        {
            res_node->coef = poly1->coef + poly2->coef;
            res_node->exp = poly1->exp;
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
        if (poly1 && poly2)
        {
            res_node->next = (SLL *)malloc(sizeof(SLL *));
            res_node = res_node->next;
            res_node->next = NULL;
        }
    }
    while (poly1 || poly2)
    {
        res_node->next = (SLL *)malloc(sizeof(SLL *));
        res_node = res_node->next;
        res_node->next = NULL;

        if (poly1)
        {

            res_node->coef = poly1->coef;
            res_node->exp = poly1->exp;
            poly1 = poly1->next;
        }

        else if (poly2)
        {
            res_node->coef = poly2->coef;
            res_node->exp = poly2->exp;
            poly2 = poly2->next;
        }
    }
    printf("<-----ADDITION----->");
    traverse_sll(*res);
}

//Subtraction of two polynomials

void subtraction_poly(SLL **res, SLL *poly1, SLL *poly2)
{

    SLL *res_node = (SLL *)malloc(sizeof(SLL *));

    res_node->next = NULL;
    *res = res_node;
    while (poly1 && poly2)
    {
        if (poly1->exp > poly2->exp)
        {
            res_node->coef = poly1->coef;
            res_node->exp = poly1->exp;
            poly1 = poly1->next;
        }
        else if (poly2->exp > poly1->exp)
        {
            res_node->coef = -poly2->coef;
            res_node->exp = poly2->exp;
            poly2 = poly2->next;
        }
        else
        {
            res_node->coef = poly1->coef - poly2->coef;
            res_node->exp = poly1->exp;
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
        if (poly1 && poly2)
        {
            res_node->next = (SLL *)malloc(sizeof(SLL *));
            res_node = res_node->next;
            res_node->next = NULL;
        }
    }
    while (poly1 || poly2)
    {
        res_node->next = (SLL *)malloc(sizeof(SLL *));
        res_node = res_node->next;
        res_node->next = NULL;

        if (poly1)
        {

            res_node->coef = poly1->coef;
            res_node->exp = poly1->exp;
            poly1 = poly1->next;
        }

        else if (poly2)
        {
            res_node->coef = poly2->coef;
            res_node->exp = poly2->exp;
            poly2 = poly2->next;
        }
    }
    printf("<-----SUBTRACTION----->");
    traverse_sll(*res);
}

//Multiplication of two polynomials

void multiplication_poly(SLL **res, SLL *poly1, SLL *poly2)
{
    SLL *ptr1, *ptr2;
    ptr1 = poly1;
    ptr2 = poly2;

    while (ptr1 != NULL)
    {
        while (ptr2 != NULL)
        {
            SLL *res_node;
            if (*res == NULL)
            {
                res_node = (SLL *)malloc(sizeof(SLL *));
                res_node->next = NULL;
                *res = res_node;
            }
            else
            {
                res_node->next = (SLL *)malloc(sizeof(SLL *));
                res_node = res_node->next;
                res_node->next = NULL;
            }

            float coef;
            int power;
            coef = ptr1->coef * ptr2->coef;
            power = ptr1->exp + ptr2->exp;

            res_node->coef = coef;
            res_node->exp = power;

            ptr2 = ptr2->next;
        }
        ptr2 = poly2;
        ptr1 = ptr1->next;
    }
    printf("<------MULTIPLICATION------>");

    *res = add_power(res, poly1, poly2);
    traverse_sll(*res);
}

//Addition of coefficients of duplicate power

SLL *add_power(SLL **link, SLL *poly1, SLL *poly2)
{
    int n = poly1->exp + poly2->exp;

    SLL *final_mul = NULL;
    SLL *temp;
    temp = *link;
    float final_coef;
    for (int i = n; i >= 0; i--)
    {
        final_coef = 0;
        while (temp != NULL)
        {
            if (temp->exp == i)
            {
                final_coef += temp->coef;
            }
            temp = temp->next;
        }
        if (final_coef != 0)
        {

            insert_end(&final_mul, final_coef, i);
        }

        temp = *link;
    }
    return final_mul;
}
