#include<stdio.h>
int n,a[20],i;
void quick_sort(int [],int,int);
int partision(int [],int,int);
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
    quick_sort(a,0,n);
    printf("\nArray elements after sorting: ");
    for(i=1;i<=n;i++)
    {
        printf("\n%d",a[i]);
    }
    return 0;
}
void quick_sort(int a[],int low,int high)
{
   int p;
   if(low<high)
   {
       p=partision(a,low,high);
       quick_sort(a,low,p-1);
       quick_sort(a,p+1,high);
   }
}
int partision(int a[],int low,int high)
{
    int i,j,pivot,temp;
    pivot=a[low];
    i=low;
    j=high;
    while(i<j)
    {
        while(a[i]<=pivot)
        {
            i++;
        }
        while(a[j]>pivot)
        {
            j--;
        }
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    temp=a[low];
    a[low]=a[j];
    a[j]=temp;
    return j;
}
