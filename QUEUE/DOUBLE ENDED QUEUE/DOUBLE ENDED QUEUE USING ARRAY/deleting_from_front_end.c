#include<stdio.h>
#include<stdlib.h>
#define size 10
int queue[size];
int rear=-1,front=-1;
void enque();
void delete_from_front_end();
void display();
int main()
{
    printf("\nDOUBLE ENDED QUEUE USING ARRAYS");
    enque();
    delete_from_front_end();
    display();
    return 0;
}
void enque()
{
    char ch;
    do
    {
      int ele;
      if((front==0 && rear==size-1)||front==rear+1)
      {
          printf("\nQueue is full or OVERFLOW");
      }
      else
      {
          rear=(rear+1)%size;
          printf("\nEnter element: ");
          scanf("%d",&ele);
          queue[rear]=ele;
          if(front==-1)
          {
              front=0;
          }
      }
      printf("\nDo you want to add more elements in queue: ");
      fflush(stdin);
      scanf("%c",&ch);
    }while(ch=='Y'||ch=='y');
}
void delete_from_front_end()
{
    if(rear==-1 && front==-1)
    {
       printf("\nQueue is empty or UNDERFLOW");
    }
    else if(front==rear)
    {
        printf("\nDeleted element is: %d",queue[front]);
        front=-1;
        rear=-1;
    }
    else
    {
        printf("\nDeleted element is: %d",queue[front]);
        front++;
    }
}
void display()
{
    int i;
    if(front==-1 && rear==-1)
    {
        printf("\nQueue is empty or UNDERFLOW");
    }
    else
    {
        printf("\nElements of queue are: ");
      for(i=front;i!=rear;i=(i+1)%size)
      {
          printf("\n%d",queue[i]);
      }
      printf("\n%d",queue[i]);
    }
}

