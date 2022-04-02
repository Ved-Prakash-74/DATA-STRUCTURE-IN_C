#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head,*new,*temp,*d;
void create();
void display();
void delete_from_any_pos();
int main()
{
    create();
    printf("\nList is:\n");
    display();
    delete_from_any_pos();
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
void delete_from_any_pos()
{
    int pos,i;
    temp=head;
    printf("\nEnter position from where you want to delete element: ");
    scanf("%d",&pos);
    for(i=0;i<pos-2;i++)
    {
        temp=temp->next;
    }
    d=temp->next;
    printf("\nDeleted element is %d",temp->next->data);
    temp->next=d->next;
    d->next=NULL;
    free(d);
}


