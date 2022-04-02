#include<stdio.h>
int main()
{
    int n,a[20],key,flag=0,i;
    printf("\nEnter array size: ");
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
    printf("\nEnter key element to be searched: ");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("\nKey element found at index %d",i+1);
    }
    else
    {
        printf("\nKey element not found");
    }
    return 0;
}
