#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
int stack[20],top=-1,op1,op2;
void main()
{
    char postfix[20];
    int res,i;
    printf("\nEnter postfix expression: ");
    fflush(stdin);
    gets(postfix);
    for(i=0;postfix[i]!='\0';i++)
    {
        if(isdigit(postfix[i]))
        {
            push(postfix[i]-48);
        }
        else
        {
            op2=pop();
            op1=pop();
          switch(postfix[i])
          {
           case '+':
           {
             res=push(op1+op2);
             break;
           }
           case '-':
           {
             res=push(op1-op2);
             break;
           }
           case '*':
           {
             push(op1*op2);
             break;
           }
           case '/':
           {
             push(op1/op2);
             break;
           }
           case '%':
           {
             res=push(op1%op2);
             break;
           }
           case '^':
           {
             res=pow(op1,op2);
             push(res);
             break;
           }
          }
       }
    }
    printf("\nResult of postfix expression is: %d",pop());
}
void push(int x)
{
    top=top+1;
    stack[top]=x;
}
int pop()
{
    return stack[top--];
}
