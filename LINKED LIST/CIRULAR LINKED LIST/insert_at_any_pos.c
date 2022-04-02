#include<stdio.h>
#include<stdlib.h>
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
    printf("\nList is:\n");
    display();
    insert_at_any_pos();
    printf("\nAfter inserting element list is: \n");
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
        printf("\nDo you want to add more elements in your list (y/y): ");
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
void insert_at_any_pos()
{
    int value,pos,i;
    temp=head;
    new=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter position where you want to insert element: ");
    scanf("%d",&pos);
     for(i=0;i<pos-1;i++)
    {
        temp=temp->next;
    }
    printf("\nEnter value which is to be inserted: ");
    scanf("%d",&value);
    new->next=temp->next;
    temp->next=new;
    new->data=value;
}


