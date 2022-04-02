#include<stdio.h>
int main()
{
    int n,a[10],i,pos,ele;
    printf("\nEnter size of array: ");
    scanf("%d",&n);
    printf("\nEnter elements:\n ");
    for(i=0;i<n;i++)
    {
        scanf("\n%d",&a[i]);
    }
    printf("\nArray elements are: ");
     for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
    printf("\nAfter reversing Array elements are: ");
     for(i=n-1;i>=0;i--)
    {
        printf("\n%d",a[i]);
    }
    return 0;
}
