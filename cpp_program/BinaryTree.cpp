#include<stdio.h>
#include<stdlib.h>
#define NULL nullptr

struct node {
    int data;
    struct node *left;
    struct node *right;
};
struct node *root = NULL;

struct node* create_node(int x)
{
    struct node *temp = (struct node*)malloc(1*sizeof(struct node));
        temp->data = x;
        temp->left=NULL;
        temp->right=NULL;
        printf("INSERTED: %d, \t", temp->data);
        return temp;
}

struct node* add_to_tree(struct node *ptr, int x)
{
    if (ptr==NULL)
        return create_node(x);
    else
    {
        if (x <= ptr->data)
        {
            ptr->left = add_to_tree(ptr->left, x);
            return ptr;
        }
        else
        {
            ptr->right = add_to_tree(ptr->right, x);
            return ptr;
        }
        
    }
    
}

void traverse_tree(struct node *ptr)
{
    if (ptr->left==NULL)
    {
        printf("%d\t",ptr->data);
    }
    else
    {
        traverse_tree(ptr->left);
        printf("%d\t",ptr->data);
    }
    if (ptr->right!=NULL)
    {
        traverse_tree(ptr->right);
    }
} 

void delete_node(struct node *ptr, struct node *parent_ptr,int x)
{
    struct node *root_node = NULL;
    if (x<ptr->data)
        delete_node(ptr->left, ptr, x);
    else if (x>ptr->data)
        delete_node(ptr->right, ptr, x);
    else
    {
        if (ptr->left!=NULL && ptr->right==NULL) 
        {
            if (parent_ptr==NULL)
            {
                root = ptr->left;
                free(ptr);
                return;
            }
            else
            {
                if (parent_ptr->left==ptr)
                    parent_ptr->left=ptr->left;
                else if (parent_ptr->right==ptr)
                    parent_ptr->right=ptr->left;
                free(ptr);
                return;
            }
            
        }
        else if (ptr->left==NULL && ptr->right!=NULL)
        {
            if (parent_ptr==NULL)
            {
                root = ptr->right;
                free(ptr);
                return;
            }
            else
            {
                if (parent_ptr->left==ptr)
                    parent_ptr->left=ptr->right;
                else if (parent_ptr->right==ptr)
                    parent_ptr->right=ptr->right;
                free(ptr);
                return;
            }
            
        }
        else if (ptr->left==NULL && ptr->right==NULL)
        {
            if (parent_ptr==NULL)
            {
                root = ptr->right;
                free(ptr);
                return;
            }
            else
            {
                if (parent_ptr->left==ptr)
                    parent_ptr->left=NULL;
                else if (parent_ptr->right==ptr)
                    parent_ptr->right=NULL;
                free(ptr);
                return;
            }
            
        }
        else if (ptr->left!=NULL && ptr->right!=NULL)
        {   
            struct node *temp;
            if (parent_ptr!=NULL)
            {
                if (parent_ptr->left==ptr)
                {
                    parent_ptr->left=ptr->left;
                    temp = parent_ptr->left;
                }
                else if (parent_ptr->right==ptr)
                {
                    parent_ptr->right=ptr->left;
                    temp = parent_ptr->right;
                }
            }
            else
            {        
                root = ptr->left;
                temp = ptr->left;   
            }
            while (temp->right!=NULL)
                    temp = temp->right;
            temp->right = ptr->right;
            free(ptr);
            return;
        }
        return;
    }
}

int main()
{
    int n,x;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        root = add_to_tree(root, x);
        printf("ROOT: %d\n", root->data);
    }

    printf("\n");

    traverse_tree(root);

    printf("\n");
    
    scanf("%d", &x);
    printf("DELETED: %d\n",x);
    delete_node(root, NULL, x);
    if (root==NULL)
        printf("ROOT: NULL");
    else
    {
        printf("ROOT: %d\n",root->data);
        traverse_tree(root);
    }
}