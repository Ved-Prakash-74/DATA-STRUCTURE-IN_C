#include<stdio.h>
int n,a[20],temp,i,j;
void insertion_sort();
int main()
{
    printf("\nEnter size of array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nElements of array are: ");
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
    insertion_sort();
    printf("\nArray elements after sorting: ");
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
    return 0;
}
void insertion_sort()
{
   for(i=1;i<n;i++)
   {
       temp=a[i];
       for(j=i;j>0&&temp<a[j-1];j--)
       {
           a[j]=a[j-1];
       }
        a[j]=temp;
   }
}

