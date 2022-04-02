#include<stdio.h>
int n,a[20],i,j,temp,incr;
void shell_sort();
int main()
{
    printf("\nEnter size of array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nArray elements are: ");
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
    shell_sort();
    printf("\nArray elements after sorting are: ");
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
    return 0;
}
void shell_sort()
{
    for(incr=n/2;incr>=1;incr=incr/2)
    {
        for(i=incr;i<n;i++)
        {
            temp=a[i];
            for(j=i-incr;a[j]>temp&&j>=0;j=j-incr)
            {
                a[j+incr]=a[j];
            }
            a[j+incr]=temp;
        }
    }
}
