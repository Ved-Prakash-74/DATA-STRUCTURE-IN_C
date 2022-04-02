#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
struct node
{
    int data;
    struct node *next;
}*new,*top;
void push(int);
void pop();
int main()
{
    int op1,op2;
    char postfix[20];
    int res,i;
    printf("\nEnter postfix expression: ");
    fflush(stdin);
    gets(postfix);
    for(i=0;postfix[i]!='\0';i++)
    {
        if(isdigit(postfix[i]))
        {
            push((postfix[i]-48));
        }
        else
        {
          op2=top->data;
          pop();
          op1=top->data;
          pop();
          switch(postfix[i])
          {
           case '+':
             res=(op1+op2);
             push(res);
             break;
           case '-':
             res=(op1-op2);
             push(res);
             break;
           case '*':
             res=(op1*op2);
             push(res);
             break;
           case '/':
             res=(op1/op2);
             push(res);
             break;
           case '%':
             res=(op1%op2);
             push(res);
             break;
           case '^':
             res=pow(op1,op2);
             push(res);
             break;
          }
        }
    }
    printf("\nResult of postfix expression is: %d",top->data);
    return 0;
}
void push(int x)
{
    new=(struct node *)malloc(sizeof(struct node));
    new->data=x;
    new->next=top;
    top=new;
}
void pop()
{
    top=top->next;
}
