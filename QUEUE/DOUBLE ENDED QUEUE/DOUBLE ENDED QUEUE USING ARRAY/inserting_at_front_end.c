#include<stdio.h>
#include<stdlib.h>
#define size 10
int queue[size];
int rear=-1,front=-1;
void enque();
void insert_at_front_end();
void display();
int main()
{
    printf("\nDOUBLE ENDED QUEUE USING ARRAYS");
    enque();
    insert_at_front_end();
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
void insert_at_front_end()
{
    int ele;
    printf("\nEnter element to be inserted at front end: ");
    scanf("%d",&ele);
    if(front==rear+1)
    {
       printf("\nQueue is full or OVERFLOW");
    }
    else if(front==-1 && rear==-1)
    {
        front++;
        rear++;
        queue[front]=ele;
    }
    else
    {
        front--;
        queue[front]=ele;
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

