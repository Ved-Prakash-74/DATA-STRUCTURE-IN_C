#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
void push(char);
char pop();
int priority(char);
int top=-1;
char stack[20];
int main()
{
    char infix[20],postfix[20],ch;
    int i,j=0;
    printf("\nEnter infix expression: ");
    fflush(stdin);
    gets(infix);
    for(i=0;infix[i]!='\0';i++)
    {
        ch=infix[i];
        if(ch=='(')
        {
            push(ch);
        }
        else if(isalpha(ch)||isdigit(ch))
        {
            postfix[j]=ch;
            j++;
        }
        else if(ch==')')
        {
            while(stack[top]!='(' && top!=1)
            {
                postfix[j]=pop();
                j++;
            }
            pop();
        }
        else
        {
            while(priority(ch)<=priority && top!=-1)
            {
                postfix[j]=pop();
                j++;
            }
            push(ch);
        }
    }
    while(top!=-1)
    {
        postfix[j]=pop();
        j++;
    }
    postfix[j]='\0';
    printf("\nResult is: %s",postfix);
    return 0;
}
void push(char x)
{
    top++;
    stack[top]=x;
}
char pop()
{
    return stack[top--];
}
int priority(char ch)
{
    if(ch=='(')
    {
        return 0;
    }
    else if(ch=='+'||ch=='-')
    {
        return 1;
    }
    else if(ch=='*'||ch=='/'||ch=='%')
    {
        return 2;
    }
    else if(ch=='^')
    {
        return 3;
    }
}
