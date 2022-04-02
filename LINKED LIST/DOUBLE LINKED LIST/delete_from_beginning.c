#include<stdio.h>
#include<stdio.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
}*new,*temp,*head;
void delete_fron_beginning();
void create();
void display();
int main()
{
    create();
    printf("\nList is:\n");
    display();
    delete_from_beginning();
    printf("\nAfter deleting element list is: \n");
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
void delete_from_beginning()
{
    temp=head;
    printf("\nDeleted element is %d",head->data);
    head=head->next;
    temp->next=NULL;
    head->prev=NULL;
    free(temp);
}


