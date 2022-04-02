#include<stdio.h>
#include<stdio.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
}*new,*temp,*head;
void create();
void display();
void insert_at_any_pos();
int main()
{
    create();
    printf("\nList is:\n");
    display();
    insert_at_any_pos();
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
void insert_at_any_pos()
{
    temp=head;
    int value,pos,i;
    new=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter position where you want to insert element: ");
    scanf("%d",&pos);
    for(i=0;i<pos-2;i++)
    {
        temp=temp->next;
    }
    printf("\nEnter value: ");
    scanf("%d",&value);
    new->data=value;
    new->next=temp->next;
    temp->next->prev=new;
    temp->next=new;
    new->prev=temp;
}
