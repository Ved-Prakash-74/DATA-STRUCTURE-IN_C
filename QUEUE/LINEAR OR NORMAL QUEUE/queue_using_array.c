#include<stdio.h>
#define size 5
int queue[size];
int rear=-1,front=-1;
void enque();
void deque();
void display();
int main()
{
    int ch;
    printf("QUEUE USING ARRAYS");
    printf("\n");
    do
    {
        printf("\nEnter 1 to perform enque opertion");
        printf("\nEnter 2 to perform deque operation");
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
          default:
          {
             break;
          }
        }
    }while(ch!=3);
    return 0;
}
void enque()
{
    int ele;
    if(rear==size-1)
    {
        printf("\nQueue is full or Queue OVERFLOW");
    }
    else
    {
        rear++;
        printf("\nEnter element: ");
        scanf("%d",&ele);
        queue[rear]=ele;
        if(front==-1)
        {
            front=0;
        }
    }
}
void deque()
{
    if(front==-1 && rear==-1)
    {
        printf("\nQueue is empty or queue UNDERFLOW");
    }
    else if(front==rear)
    {
        printf("\nDeleted element is %d",queue[front]);
        front=-1;
        rear=-1;
    }
    else
    {
        printf("\nDeleted element is %d",queue[front]);
        front++;
    }
}
void display()
{
    int i;

    if(front==-1 && rear==-1)
    {
        printf("\nQueue is empty or queue UNDERFLOW");
    }
    else
    {
        printf("\nElements in queue are: ");
        for(i=front;i<=rear;i++)
        {
            printf("\n%d",queue[i]);
        }
    }
}
