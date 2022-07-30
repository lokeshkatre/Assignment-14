#include <stdio.h>
int main()
{
    int arr[10];
    printf("Enter array:");
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    // printing stored array
    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    for (int i = 0; i < 5; i++)
    {
        int temp;
        temp = arr[i];
        arr[i] = arr[9 - i];
        arr[9 - i] = temp;
    }
    printf("\nAfter reversing array:");
    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);

    return 0;
}