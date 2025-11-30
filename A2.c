#include<stdio.h>
int main()
{
    int a[] = {64, 34, 25, 12, 22, 11, 90, 45};
    int n = 8;
    int i, j, min, max, temp;

    for(i=0; i<n/2; i++)
    {
        min = i;
        max = i;

        for(j=i+1; j<n-i; j++)
        {
            if(a[j] < a[min])
                min = j;
            if(a[j] > a[max])
                max = j;
        }

        temp = a[i];
        a[i] = a[min];
        a[min] = temp;

        if(max == i)
            max = min;

        temp = a[n-1-i];
        a[n-1-i] = a[max];
        a[max] = temp;
    }

    for(i=0; i<n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}