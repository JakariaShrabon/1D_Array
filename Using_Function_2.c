#include <stdio.h>
#include <stdlib.h>
void sum(int a[], int b[], int c[]);
int *sum1(int a[], int b[]);
void main()
{
    int a[] = {1, 2, 4};
    int b[] = {1, 2, 3};
    int c[3];

    sum(a, b, c);
    for (int i = 0; i <= 2; i++)
    {
        printf("%d ", c[i]);
    }
    printf("\n");
    int *j;
    j = sum1(a, b);
    for (int i = 0; i <= 2; i++)
    {
        printf("%d ", j[i]);
    }
    printf("\n");
    free(j);
}
void sum(int a[], int b[], int c[])
{
    for (int i = 0; i <= 2; i++)
    {
        c[i] = a[i] + b[i];
    }
}
int *sum1(int a[], int b[])
{
    int *d;
    d = (int *)calloc(3, sizeof(int));
    for (int i = 0; i <= 2; i++)
    {
        d[i] = a[i] + b[i];
    }
    for (int i = 0; i <= 2; i++)
    {
        printf("#%d ", b[i]);
    }
    printf("\n");

    return d;
}
