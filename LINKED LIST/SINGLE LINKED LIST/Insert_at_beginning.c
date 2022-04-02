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
void insert_beginning();
int main()
{
    create();
    printf("\nList is: \n");
    display();
    insert_beginning();
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
void insert_beginning()
{
  int value;
  new=(struct node *)malloc(sizeof(struct node));
  printf("\nEnter value which is to be inserted in beginning: ");
  scanf("%d",&value);
  new->data=value;
  new->next=head;
  head=new;
}
