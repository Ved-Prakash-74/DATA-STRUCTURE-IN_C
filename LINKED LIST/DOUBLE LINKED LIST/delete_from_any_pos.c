#include<stdio.h>
#include<stdio.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
}*new,*temp,*head,*d;
void delete_from_any_pos();
void create();
void display();
int main()
{
    create();
    printf("\nList is:\n");
    display();
    delete_from_any_pos();
    printf("\nAfter deleted element list is: \n");
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
void delete_from_any_pos()
{
    temp=head;
    int pos,i;
    printf("\nEnter position where you want to delete element: ");
    scanf("%d",&pos);
    for(i=0;i<pos-2;i++)
    {
        temp=temp->next;
    }
    d=temp->next;
    printf("\nDeleted element is %d",d->data);
    temp->next=d->next;
    d->next->prev=temp;
    d->prev=NULL;
    d->next=NULL;
    free(d);
}


