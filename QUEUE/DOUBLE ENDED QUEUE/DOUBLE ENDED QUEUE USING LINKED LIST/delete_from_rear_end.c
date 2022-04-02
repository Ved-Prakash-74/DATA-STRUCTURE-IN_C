#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
}*new,*front,*rear,*temp;
void enque();
void display();
void delete_from_rear_end();
int main()
{
    printf("\nDOUBLE ENDED QUEUE USING LINKED LIST");
    enque();
    display();
    delete_from_rear_end();
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
void delete_from_rear_end()
{
    temp=rear;
    printf("\nDeleted element from rear end is: %d",rear->data);
    rear=rear->prev;
    rear->next=NULL;
    temp->prev=NULL;
    free(temp);
}



