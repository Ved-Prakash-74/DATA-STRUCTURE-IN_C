#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
}*new,*front,*rear,*temp;
void enque();
void inserting_at_rear_end();
void display();
int main()
{
    printf("\nDOUBLE ENDED QUEUE USING LINKED LIST");
    enque();
    display();
    inserting_at_rear_end();
    display();
    return 0;
}
void enque()
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
        if(front==NULL && rear==NULL)
        {
            front=new;
            rear=new;
        }
        else
        {
            rear->next=new;
            new->prev=rear;
            rear=new;
        }
        printf("\nDo you want to add more elements in your queue(Y/y): ");
        fflush(stdin);
        scanf("%c",&ch);
    }while(ch=='Y'||ch=='y');
}
void display()
{
    temp=front;
    if(front==NULL && rear==NULL)
    {
        printf("\nQueue is empty or UNDERFLOW");
    }
    else
    {
        printf("\nElements of queue are: \n");
        while(temp!=NULL)
        {
            printf("\n%d",temp->data);
            temp=temp->next;
        }
    }
}
void inserting_at_rear_end()
{
    int value;
    new=(struct node *)malloc(sizeof(struct node));
    new->prev=rear;
    printf("\nEnter value to be inserted at rear end: ");
    scanf("%d",&value);
    new->data=value;
    new->next=NULL;
    rear->next=new;
    rear=new;
}


