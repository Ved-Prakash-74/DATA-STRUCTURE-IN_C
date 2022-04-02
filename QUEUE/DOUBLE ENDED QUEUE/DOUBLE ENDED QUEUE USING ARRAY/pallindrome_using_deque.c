#include<stdio.h>
#include <string.h>
#define MAX 100
char DQ[MAX];
int left = -1, right = -1;
void Insert(char ch)
{
    if ((left == 0 && right == MAX - 1) || (left == right + 1))
    {
        printf("\nOverflow\n");
        return;
    }
    if (left == -1)
    {
        left = 0;
        right = 0;
    }
    else
    {
        if (right == MAX - 1)
            right = 0;
        else
            right = right + 1;
    }
    DQ[right] = ch;
}
void DeleteLeft()
{
    if (left == -1)
    {
        return;
    }
    if (left == right)
    {
        left = -1;
        right = -1;
    }
    else
    {
        if (left == MAX - 1)
            left = 0;
        else
            left = left + 1;
    }
}
void DeleteRight()
{
    if (left == -1)
    {
        return;
    }
    if (left == right)
    {
        left = -1;
        right = -1;
    }
    else
    {
        if (right == 0)
            right = MAX - 1;
        else
            right = right - 1;
    }
}
void main()
{
    char val[100];
    int i,j,l;
    printf("Enter value for checking Palindrome : ");
    gets(val);
    l = strlen(val);
    for(i=0;i<l;i++)
        Insert(val[i]);
    for(i=0,j=l-1;i<l;i++,j--)
    {
        if(val[i] == val[j])
        {
            DeleteLeft();
            DeleteRight();
        }
    }
    if(left == -1)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}
