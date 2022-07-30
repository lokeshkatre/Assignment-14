#include <stdio.h>
int main()
{
    int arr[10], min;
    printf("Enter elements in array :");
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    min = arr[0];
    for (int i = 0; i < 10; i++)
        if (min > arr[i])
            min = arr[i];
    printf("The smallest element of array is %d", min);
    return 0;
}