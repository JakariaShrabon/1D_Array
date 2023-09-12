#include <stdio.h>
int main()
{
    int arr[] = {5, 4, 3, 2};
    for (int i = 0; i < 4; i++)
    {
        printf("arr[%d]=%d", i, arr[i]);
        printf("\n");
    }
    printf("\n");
    char c[] = "Anis";
    for (int i = 0; i < 4; i++)
    {
        printf("arr[%d]=%c", i, c[i]);
        printf("\n");
    }
}