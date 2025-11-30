#include<stdio.h>

int partition(int a[], int low, int high)
{
    int pivot = a[high];
    int i = low - 1;
    int j, temp;

    for(j=low; j<high; j++)
    {
        if(a[j] <= pivot)
        {
            i++;
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    temp = a[i+1];
    a[i+1] = a[high];
    a[high] = temp;
    return i+1;
}

void quicksort(int a[], int low, int high)
{
    if(low < high)
    {
        int pi = partition(a, low, high);
        quicksort(a, low, pi-1);
        quicksort(a, pi+1, high);
    }
}

int main()
{
    int a[] = {64, 34, 25, 12, 22, 11, 90};
    int n = 7;

    quicksort(a, 0, n-1);

    int i;
    for(i=0; i<n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}