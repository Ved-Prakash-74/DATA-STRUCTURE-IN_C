#include<stdio.h>
int n,a[20],i,j;
void bubble_sort();
int main()
{
    printf("\nEnter size of array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nElement of array are: ");
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
    bubble_sort();
    printf("\nAfter sorting array elements are: ");
    for(i=1;i<=n;i++)
    {
        printf("\n%d",a[i]);
    }
    return 0;
}
void bubble_sort()
{
    int temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j] > a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

