#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *next;
}*new,*head,*temp;
void create();
void display();
void insert_at_any_pos();
int main()
{
    create();
    printf("\nList is: \n");
    display();
    insert_at_any_pos();
    printf("\nAfter inserting element list is: \n");
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
        printf("\nWant to add more elements to your list (Y/y): ");
        fflush(stdin);
        scanf("%c",&ch);
    }while(ch=='y' || ch=='Y');
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
void insert_at_any_pos()
{
  int value,pos,i;
  temp=head;
  new=(struct node *)malloc(sizeof(struct node));
  printf("\nEnter position where you want to insert element: ");
  scanf("%d",&pos);
  printf("\nEnter value which is to be inserted: ");
  scanf("%d",&value);
  for(i=0;i<pos-1;i++)
  {
      temp=temp->next;
  }
  new->data=value;

  new->next=temp->next;
  temp->next=new;
}

