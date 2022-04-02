#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head,*new,*temp,*d;
void create();
void display();
void sort();
int main()
{
    create();
    printf("\nList is:\n");
    display();
    sort();
    printf("\nAfter sorting list is:\n");
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
void sort()
{
    int temp;
    struct node *t1,*t2;
    for(t1=head;t1->next!=NULL;t1=t1->next)
    {
        for(t2=head;t2->next!=NULL;t2=t2->next)
        {
            if(t2->data > t2->next->data)
            {
                temp=t2->data;
                t2->data=t2->next->data;
                t2->next->data=temp;
            }
        }
    }
}


