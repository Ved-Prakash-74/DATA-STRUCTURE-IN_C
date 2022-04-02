#include<stdio.h>
int main()
{
    int n,a[10],i,ele,pos;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("\nEnter array elements:\n ");
    for(i=0;i<n;i++)
    {
      scanf("\n%d",&a[i]);
    }
    printf("\nArray elements are: ");
     for(i=0;i<n;i++)
    {
      printf("\n%d",a[i]);
    }
    n++;
    printf("\nEnter a position where you want to insert element: ");
    scanf("%d",&pos);
    printf("\nEnter element which is to be inserted: ");
    scanf("%d",&ele);
    for(i=n;i>pos;i--)
    {
        a[i-1]=a[i-2];
    }
    a[pos-1]=ele;
    printf("\nAfter inserting array elements are: ");
     for(i=0;i<n;i++)
    {
      printf("\n%d",a[i]);
    }
    return 0;
}

