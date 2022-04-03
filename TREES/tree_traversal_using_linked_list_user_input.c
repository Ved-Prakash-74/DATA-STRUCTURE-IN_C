#include<stdio.h>
#include<stdlib.h>

typedef struct BST
{
  int data;
  struct BST *left;
  struct BST *right;
}node;

node *create();
void insert(node *,node *);
void preorder(node *);
void inorder(node *);
void postorder(node *);

int main()
{
  char ch;
  node *root=NULL,*temp;
  do
  {
    temp=create();
    if(root==NULL)
       root=temp;
    else
       insert(root,temp);
    printf("\nDo you want to enter more(y/n): ");
    getchar();
    scanf("%c",&ch);
  }while(ch=='y'|ch=='Y');
printf("\n\nPreorder Traversal: ");
preorder(root);
printf("\nIn Order Traversal: ");
inorder(root);
printf("\nPost Order Traversal: ");
postorder(root);
return 0;
}

node *create()
{
  node *temp;
  temp=(node*)malloc(sizeof(node));
  printf("\nEnter data:");
  scanf("%d",&temp->data);
  temp->left=temp->right=NULL;
  return temp;
}

void insert(node *root,node *temp)
{
  if(temp->data<root->data)
  {
    if(root->left!=NULL)
       insert(root->left,temp);
    else
       root->left=temp;
  }
   if(temp->data>root->data)
   {
     if(root->right!=NULL)
        insert(root->right,temp);
    else
        root->right=temp;
   }
}

void preorder(node *root)
{
  if(root!=NULL)
  {
    printf("\n%d ",root->data);
    preorder(root->left);
    preorder(root->right);
  }
}
void inorder(node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("\n%d",root->data);
        inorder(root->right);
    }
}

void postorder(node *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("\n%d",root->data);
    }
}

