#include <stdio.h>
void main()
{
    int arr[6];
    int delete = 0;
    int index = 0;
    printf("Enter the value of index:");
    scanf("%d", &index);
    for (int i = 0; i < index; i++)
    {
        printf("Eelement[%d]:", i);
        scanf("%d", &arr[i]);
    }
    printf("\n");
    for (int i = 0; i < index; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n\n");
    printf("Enter the delete Index :");
    scanf("%d", &delete);
    printf("\n");
    for (int i = delete; i < index; i++)
    {
        arr[i] = arr[i + 1];
        index--;
    }

    for (int i = 0; i < index; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}
