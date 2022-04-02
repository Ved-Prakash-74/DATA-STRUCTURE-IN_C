#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*new,*top,*temp;
void push();
void pop();
void peep();
void display();
int main()
{
    int ch;
    do
    {
        printf("\nSTACK USING LINKED LIST");
        printf("\nPress 1 for PUSH OPERATION");
        printf("\nPress 2 for POP OPERATION");
        printf("\nPress 3 for PEEP OPERATION");
        printf("\nPress 4 for DISPLAY OPERATION");
        printf("\nPress 5 for exit");
        printf("\n\nEnter choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peep();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
            break;
        default :
            printf("\nINVALID INPUT !!!");
            break;
        }
    }while(ch!=4);
    return 0;
}
void push()
{
    int value;
    new=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter value to be pushed in stack: ");
    scanf("%d",&value);
    new->data=value;
    new->next=NULL;
    if(top==NULL)
    {
        top=new;
        temp=new;
    }
    else
    {
        new->next=top;
        top=new;
    }
}
void pop()
{
    temp=top;
    if(top==NULL)
    {
        printf("\nSTACK UNDERFLOW");
    }
    else
    {
        printf("\nDeleted element from stack is %d",top->data);
        top=top->next;
        temp->next=NULL;
        free(temp);
    }
}
void peep()
{
    temp=top;
    if(top==NULL)
    {
        printf("\nSTACK UNDERFLOW");
    }    else
    {
        printf("\nTop most element of stack is %d",top->data);
    }
}
void display()
{
    int i;
    temp=top;
    if(top==NULL)
    {
        printf("\nSTACK UNDERFLOW");
    }
    else
    {
        for(i=top;i>=0;i--)
        {
            printf("\n%d",top->data);
            top=top->next;
        }
    }
}
