#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*new,*front,*rear,*temp;
void enque();
void deque();
void display();
int main()
{
    int ch;
    printf("\nQUEUE USING LINKED LIST");
    printf("\n");
    do
    {
        printf("\nEnter 1 for enque operation");
        printf("\nEnter 2 for deque operation");
        printf("\nEnter 3 to display elements of queue");
        printf("\nEnter 4 to exit");
        printf("\nEnter choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
         case 1:
         {
             enque();
             break;
         }
         case 2:
         {
             deque();
             break;
         }
         case 3:
         {
            display();
            break;
         }
         case 4:
         {
            exit(0);
            break;
         }
         default :
         {
            break;
         }
        }
    }while(ch!=3);
    return 0;
}
void enque()
{
    int value;
    new=(struct node *)malloc(sizeof(struct node));
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
        rear=new;
    }
}
void deque()
{
   if(front==NULL && rear==NULL)
   {
       printf("\nQueue is empty or Queue UNDERFLOW");
   }
   else
   {
       printf("\nDeleted element is %d",front->data);
       front=front->next;
   }
}
void display()
{
    temp=front;
    if(front==NULL && rear==NULL)
    {
       printf("\nQueue is empty or Queue UNDERFLOW");
    }
    else
    {
        printf("\nElements of queue are: ");
        while(temp!=NULL)
        {
            printf("\n%d",temp->data);
            temp=temp->next;
        }
    }
}
