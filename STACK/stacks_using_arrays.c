#include<stdio.h>
#include<stdlib.h>
#define size 10
int stack[size];
int top=-1,ele;
void push();
void pop();
void peep();
void display();
int main()
{
    int ch;
    do
    {
      printf("\nSTACK USING ARRAYS");
      printf("\nPress 1 for PUSH OPERATION");
      printf("\nPress 2 for POP OPERATION");
      printf("\nPress 3 for PEEP OPERATION");
      printf("\nPress 4 for DISPLAY OPERATION");
      printf("\nPress 5 for EXIT");
      printf("\n\nEnter choice:\n ");
      scanf("\n\n%d",&ch);
      switch(ch)
      {
       case 1 :
         push();
         break;
       case 2 :
         pop();
         break;
       case 3 :
         peep();
         break;
       case 4 :
         display();
         break;
       case 5:
         exit(0);
         break;
       default :
         printf("\n\nINVALID INPUT !!!!");
         break;
     }
  }while(ch!=4);
}
void push()
{
    if(top==size-1)
    {
        printf("\nStack OVERFLOW");
    }
    else
    {
        printf("\nEnter element to be pushed in stack: ");
        scanf("%d",&ele);
        top=top+1;
        stack[top]=ele;
    }
}
void pop()
{
    if(top==-1)
    {
       printf("\nStack UNDERFLOW");
    }
    else
    {
        printf("\nDeleted element is %d",stack[top]);
        top=top-1;
    }
}
void peep()
{
     if(top==-1)
    {
       printf("\nStack UNDERFLOW");
    }
    else
    {
        printf("\nTopmost element of stack is %d",stack[top]);
    }
}
void display()
{
    int i;
    if(top==-1)
    {
        printf("\nStack UNDERFLOW");
    }
    else
    {
        printf("\n\nElements present in stack:\n ");
        for(i=top;i>=0;i--)
        {
            printf("\n%d",stack[i]);
        }
    }
}
