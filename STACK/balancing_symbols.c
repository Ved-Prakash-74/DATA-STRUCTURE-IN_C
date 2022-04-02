#include<stdio.h>
#include<conio.h>
void push(char);
char pop();
char stack[20];
int top=-1;
int main()
{
    char exp[20],ch;
    int i;
    printf("\nEnter expression: ");
    gets(exp);
    for(i=0;exp[i]!='\0';i++)
    {
        ch=exp[i];
        if(ch=='('||ch=='{'||ch=='[')
        {
            push(ch);
        }
        else if(ch==')')
        {
            if(top==-1)
            {
                printf("\Balanced Expression");
                exit(0);
            }
            else if((ch=pop())!='(')
            {
                printf("\nUnbalanced Expression");
                exit(0);
            }

        }
        else if(ch=='}')
        {
            if(top==-1)
            {
                printf("\nBalanced Expression");
                exit(0);
            }
            else if((ch=pop())!='{')
            {
                printf("\nUnbalanced Expression");
                exit(0);
            }
        }
        else if(ch==']')
        {
            if(top==-1)
            {
                printf("\nBalanced Expression");
                exit(0);
            }
            else if((ch=pop())!='[')
            {
                printf("\nUnbalanced Expression");
                exit(0);
            }
        }
    }
    if(top==-1)
    {
        printf("\nBalanced Expression");
    }
    else
    {
        printf("\nUnbalanced Expression");
    }
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
