#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *next;
};
struct node *new,*head,*temp;
void create();
void display();
int main()
{
    create();
    printf("\nList is: ");
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
        printf("\nDo you want to add more data in your list(Y/y): ");
        fflush(stdin);
        scanf("%c",&ch);
    }while(ch=='Y' || ch=='y');
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
