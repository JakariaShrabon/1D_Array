#include <stdio.h>
#define N 15
int main()
{
    int n, arr[N], i;
    int reverse_order[N], j = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter your elements: ");
    printf("\n");

    for (i = 0; i < n; i++)
    {
        printf("element-%d:", i);
        scanf("%d", &arr[i]);
    }
    for (i = n - 1; i >= 0; i--)
    {
        reverse_order[j] = arr[i];
        j++;
    }
    printf("%d\n", j);
    printf("The Reversed array:\n");

    j -= 1;

    for (i = 0; i < n; i++)
    {

        printf("element-%d: %d", j, reverse_order[i]);
        printf("\n");
        j--;
    }
    return 0;
}
