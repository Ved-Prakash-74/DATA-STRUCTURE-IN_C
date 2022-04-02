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
    n++;
    printf("\nEnter element which is to be inserted at beginning: ");
    scanf("%d",&ele);
    for(i=n;i>1;i--)
    {
        a[i-1]=a[i-2];
    }
    a[0]=ele;
    printf("\nAfter inserting array elements are: ");
     for(i=0;i<n;i++)
    {
      printf("\n%d",a[i]);
    }
    return 0;
}
