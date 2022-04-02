
#include <stdio.h>

void mergeSort(int [], int, int, int);
void partition(int [],int, int);

int main()
{
    int a[50];
    int i,n;

    printf("Enter size of array: ");
    scanf("%d", &n);
    for(i = 0; i <n; i++)
    {
         printf("\nEnter the elements %d: ",i+1);
         scanf("\n%d", &a[i]);
    }
    printf("\n\nArray elements are: ");
    for(i = 0;i < n; i++)
    {
         printf("\n%d",a[i]);
    }
    partition(a, 0, n - 1);
    printf("\n\nAfter merge sort: ");
    for(i = 0;i < n; i++)
    {
         printf("\n%d",a[i]);
    }

   return 0;
}

void partition(int a[],int low,int high)
{
    int mid;

    if(low < high)
    {
        mid = (low + high) / 2;
        partition(a, low, mid);
        partition(a, mid + 1, high);
        mergeSort(a, low, mid, high);
    }
}

void mergeSort(int a[],int low,int mid,int high)
{
    int i, j, k, r, b[50];

    i = low;
    k = low;
    j = mid + 1;
    while ((i <= mid) && (j <= high))
    {
        if (a[i] <= a[j])
        {
            b[k] = a[i];
            i++;
        }
        else
        {
            b[k] = a[j];
            j++;
        }
        k++;
    }
    if (i > mid)
    {
        for (r= j; r<= high; r++)
        {
            b[k] = a[r];
            k++;
        }
    }
    else
    {
        for (r = i; r <= mid; r++)
        {
             b[k] = a[r];
             k++;
        }
    }

    for (i = low; i<= high; i++)
    {
        a[i] = b[i];
    }
}
