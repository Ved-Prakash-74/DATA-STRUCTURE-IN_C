#include<stdio.h>
int n,a[20],temp,i,j,min;
void selection_sort();
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
    selection_sort();
    printf("\nArray elements after sorting: ");
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
    return 0;
}
void selection_sort()
{
   for(i=0;i<n;i++)
   {
       min=i;
       for(j=i+1;j<n;j++)
       {
           if(a[j] < a[min])
           {
                min=j;
           }
       }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
   }

}

