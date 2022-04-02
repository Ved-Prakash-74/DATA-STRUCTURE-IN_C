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
    printf("\nCIRCULAR QUEUE USING ARRAYS");
    printf("\n");
    do
    {
        printf("\nEnter 1 for enque operation");
        printf("\nEnter 2 for deque opeartion");
        printf("\nEnter 3 to display elements of circular queue");
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
    int value;
    if((front==0 && rear==size-1) || (front==rear+1))
    {
        printf("\nCircular queue is full or Circular queue OVERFLOW");
    }
    else
    {
        rear=(rear+1)%size;
        printf("\nEnter value: ");
        scanf("%d",&value);
        queue[rear]=value;
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
        printf("\nCircular queue is empty or Circular queue UNDERFLOW");
    }
    else if(front==rear)
    {
        printf("\nDeleted element is %d",front[queue]);
        front=-1;
        rear=-1;
    }
    else
    {
        printf("\nDEleted element is %d",front[queue]);
        front=(front+1)%size;
    }
}
void display()
{
    int i;
    if(front==-1 && rear==-1)
    {
        printf("\nCircular queue is empty or Circular queue UNDERFLOW");
    }
    else
    {
        printf("\nElements of Circular queue are: ");
        for(i=front;i!=rear;i=(i+1)%size)
        {
            printf("\n%d",queue[i]);
        }
        printf("\n%d",queue[i]);
    }
}
