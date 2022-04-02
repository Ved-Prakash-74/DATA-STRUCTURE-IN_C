#include<stdio.h>
int main()
{
    int n,a[10],i,flag=0,ele;
    printf("\nEnter size of array: ");
    scanf("%d",&n);
    printf("\nEnter elements:\n ");
    for(i=0;i<n;i++)
    {
        scanf("\n%d",&a[i]);
    }
    printf("\nArray elements are: ");
     for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
    printf("\nEnter element for searching: ");
    scanf("%d",&ele);
     for(i=0;i<n;i++)
    {
        if(a[i]==ele)
        {
            flag=1;
            printf("\n'Element found'");
        }
    }
    if (flag==0)
    {
        printf("\n'Element not found' ");
    }
    return 0;
}

