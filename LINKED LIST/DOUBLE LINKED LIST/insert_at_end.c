#include<stdio.h>
#include<stdio.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
}*new,*temp,*head;
void insert_at_end();
void create();
void display();
int main()
{
    create();
    printf("\nList is:\n");
    display();
    insert_at_end();
    printf("\nAfter inserting element list is: \n");
    display();
    return 0;
}
create()
{
    int value;
    char ch;
    do
    {
        new=(struct node *)malloc(sizeof(struct node));
        new->prev=NULL;
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
            new->prev=temp;
            temp=new;
        }
        printf("\nDo you want add more elements in your list (y/Y): ");
        fflush(stdin);
        scanf("%c",&ch);
    }while(ch=='y'||ch=='Y');
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
void insert_at_end()
{
    temp=head;
    int value;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    new=(struct node *)malloc(sizeof(struct node));
    new->prev=temp;
    temp->next=new;
    printf("\nEnter value: ");
    scanf("%d",&value);
    new->data=value;
    new->next=NULL;
}

