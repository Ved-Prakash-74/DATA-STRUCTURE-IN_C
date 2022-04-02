#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head,*new,*temp,*d;
void create();
void display();
void delete_from_beginning();
int main()
{
    create();
    printf("\nList is: ");
    display();
    delete_from_beginning();
    printf("\nAfter deleting element list is: ");
    display();
    return 0;
}
void create()
{
    int value;
    char ch;
    do
    {
        new=(struct node *)malloc(sizeof(struct node));
        printf("\nEnter value: ");
        scanf("%d",&value);
        new->data=value;
        new->next=new;
        if(head==NULL)
        {
            head=new;
            temp=new;
        }
        else
        {
            temp->next=new;
            temp=new;
            new->next=head;
        }
        printf("\nDo you want to add more elements in your list (Y/y): ");
        fflush(stdin);
        scanf("%c",&ch);
    }while(ch=='Y' || ch=='y');
}
void display()
{
    temp=head;
    while(temp->next!=head)
    {
        printf("\n%d",temp->data);
        temp=temp->next;
    }
    printf("\n%d",temp->data);
}
void delete_from_beginning()
{
    temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    d=head;
    printf("\nDeleted element is %d ",head->data);
    head=head->next;
    temp->next=head;
    d->next=NULL;
    free(d);
}
