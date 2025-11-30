#include<stdio.h>
int main()
{
    int a[] = {64, 34, 25, 12, 22, 11, 90};
    int n = 7;
    int i, j, key;

    for(i=1; i<n; i++)
    {
        key = a[i];
        j = i - 1;
        while(j>=0 && a[j] > key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }

    for(i=0; i<n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}