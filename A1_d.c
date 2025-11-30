#include<stdio.h>

void merge(int a[], int low, int mid, int high)
{
    int i = low;
    int j = mid + 1;
    int k = 0;
    int b[100];

    while(i <= mid && j <= high)
    {
        if(a[i] <= a[j])
            b[k++] = a[i++];
        else
            b[k++] = a[j++];
    }
    while(i <= mid)
        b[k++] = a[i++];
    while(j <= high)
        b[k++] = a[j++];

    for(i=low, k=0; i<=high; i++, k++)
        a[i] = b[k];
}

void mergesort(int a[], int low, int high)
{
    if(low < high)
    {
        int mid = (low + high) / 2;
        mergesort(a, low, mid);
        mergesort(a, mid+1, high);
        merge(a, low, mid, high);
    }
}

int main()
{
    int a[] = {64, 34, 25, 12, 22, 11, 90};
    int n = 7;

    mergesort(a, 0, n-1);

    int i;
    for(i=0; i<n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}