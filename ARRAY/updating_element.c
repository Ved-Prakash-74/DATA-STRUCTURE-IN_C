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
    printf("\nEnter position where you want to update element: ");
    scanf("%d",&pos);
    printf("\nEnter element for updating: ");
    scanf("%d",&ele);
    a[pos-1]=ele;
    printf("\nAfter updating Array elements are: ");
     for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
}
