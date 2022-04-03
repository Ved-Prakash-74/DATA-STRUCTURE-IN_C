#include<stdio.h>
#include<malloc.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node* create(int data)
{
   struct node *root;
   root=(struct node*)malloc(sizeof(struct node));
   root->data=data;
   root->left=NULL;
   root->right=NULL;
   return root;
}

void preorder(struct node *root)
{
    if(root!=NULL)
    {
        printf("\n%d",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("\n%d",root->data);
        inorder(root->right);
    }
}

void postorder(struct node *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("\n%d",root->data);
    }
}

int main()
{
    struct node* p=create(10);
    struct node* p1=create(5);
    struct node* p2=create(14);
    struct node* p3=create(2);
    struct node* p4=create(6);
    struct node* p5=create(12);
    struct node* p6=create(15);

    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    p2->left=p5;
    p2->right=p6;

    printf("\n\nPre Order Traversal: ");
    preorder(p);
    printf("\n\nIn Order Traversal: ");
    inorder(p);
    printf("\n\nPost Order Traversal: ");
    postorder(p);

    return 0;
}
