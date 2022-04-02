#include<stdio.h>
int main()
{
    int n,a[10],i,ele;
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
    printf("\nEnter element which is to be deleted: ");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        a[i]=a[i+1];
    }
    printf("\nAfter inserting array elements are: ");
     for(i=0;i<n;i++)
    {
      printf("\n%d",a[i]);
    }
    return 0;
}

