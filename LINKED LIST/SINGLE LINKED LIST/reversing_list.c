#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head,*new,*temp;
void create();
void display();
void reverse();
int main()
{
    create();
    printf("\nList is:\n");
    display();
    reverse();
    printf("\nAfter reversing list is:\n");
    display();
    return 0;
}
void create()
{
    char ch;
    int value;
    do
    {
      new=(struct node *)malloc(sizeof(struct node));
      printf("\nEnter value: ");
      scanf("%d",&value);
      new->data=value;
      new->next=NULL;
      if(head==NULL)
      {
         head=new;
         temp=new;
      }
      else
      {
         temp->next=new;
         temp=new;
      }
      printf("\nDo you want to add more elements in your list (Y/y): ");
      fflush(stdin);
      scanf("%c",&ch);
    }while(ch=='Y'||ch=='y');
}
void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("\n%d",temp->data);
        temp=temp->next;
    }
}
void reverse()
{
    struct node *next,*current,*prev=NULL;
    current=head;
    while(current!=NULL)
    {
      next=current->next;
      current->next=prev;
      prev=current;
      current=next;
    }
    head=prev;
}


