#include<stdio.h>
int main()
{
    int n,a[10],i,pos;
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
    n--;
    printf("\nEnter position from where you want to delete element: ");
    scanf("%d",&pos);
    for(i=pos;i<=n;i++)
    {
        a[i-1]=a[i];
    }
    printf("\nAfter inserting array elements are: ");
     for(i=0;i<n;i++)
    {
      printf("\n%d",a[i]);
    }
    return 0;
}

