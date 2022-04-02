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
    printf("\nList is: ");
    display();
    delete_from_any_pos();
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
void delete_from_any_pos()
{
    int pos,i;
    temp=head;
    printf("\nEnter position from where you want to deleted element: ");
    scanf("%d",&pos);
    for(i=0;i<pos-2;i++)
    {
        temp=temp->next;
    }
    d=temp->next;
    printf("\nDeleted element is %d ",d->data);
    temp->next=d->next;
    d->next=NULL;
    free(d);
}

