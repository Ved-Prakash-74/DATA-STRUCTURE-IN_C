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
int height(node*);
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
    printf("\nDo you want to enter more element(y/n): ");
    fflush(stdin);
    scanf("%c",&ch);
  }while(ch=='y'||ch=='Y');
  printf("\nHeight of Binary Tree is: %d",height(root));
return 0;
}
node *create()
{
  node *temp;
  temp=(node*)malloc(sizeof(node));
  printf("\nEnter data:");
  scanf("%d",&temp->data);
  temp->left=NULL;
  temp->right=NULL;
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
int height(node* root)
{
    if(root==NULL)
    {
        return -1;
    }
    else
    {
        int left_subtree=height(root->left);
        int right_subtree=height(root->right);
        if(left_subtree > right_subtree)
        {
            return(left_subtree + 1);
        }
        else
        {
            return(right_subtree + 1);
        }
    }
}



