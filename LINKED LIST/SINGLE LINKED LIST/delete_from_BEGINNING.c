#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head,*new,*temp;
void create();
void display();
void delete_from_beginning();
int main()
{
    create();
    printf("\nList is:\n");
    display();
    delete_from_beginning();
    printf("\nAfter deleting element list is:\n");
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
void delete_from_beginning()
{
    temp=head;
    printf("\nDeleted element is %d",temp->data);
    head=head->next;
    temp->next=NULL;
    free(temp);
}
