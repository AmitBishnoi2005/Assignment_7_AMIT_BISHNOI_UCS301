#include<stdio.h>
int main()
{
    int a[] = {64, 34, 25, 12, 22, 11, 90};
    int n = 7;
    int i, j, min, temp;

    for(i=0; i<n-1; i++)
    {
        min = i;
        for(j=i+1; j<n; j++)
        {
            if(a[j] < a[min])
                min = j;
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    for(i=0; i<n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}