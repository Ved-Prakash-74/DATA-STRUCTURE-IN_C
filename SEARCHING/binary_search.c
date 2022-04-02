#include<stdio.h>
int main()
{
    int n,a[20],key,flag=0,i,low,high,mid;
    printf("\nEnter size: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter element: ");
        scanf("%d",&a[i]);
    }
    printf("\nElements of array are: \n");
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
    printf("\nEnter key to be searched: ");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key==a[mid])
        {
            flag=1;
            break;
        }
        else if(key<a[mid])
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    if(flag==1)
    {
        printf("\nKey element found at index %d",mid+1);
    }
    else
    {
        printf("\nKey element not found");
    }
    return 0;
}
