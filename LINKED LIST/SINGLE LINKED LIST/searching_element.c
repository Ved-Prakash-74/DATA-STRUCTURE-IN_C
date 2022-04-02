#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head,*new,*temp,*d;
void create();
void display();
void search();
int main()
{
    create();
    printf("\nList is:\n");
    display();
    search();
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
void search()
{
    int flag=0,key;
    temp=head;
    printf("\nEnter key element: ");
    scanf("%d",&key);
    while(temp!=NULL)
    {
        if(key==temp->data)
        {
            flag=1;
        }
        temp=temp->next;
    }
    if (flag==1)
    {
        printf("\nElement found");
    }
    else
    {
        printf("\nElement not found");
    }
}


