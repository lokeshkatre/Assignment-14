#include <stdio.h>
int main()
{
    int arr[10], max;
    printf("Enter elements in array :");
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    max = arr[0];
    for (int i = 0; i < 10; i++)
        if (max < arr[i])
            max = arr[i];
    printf("The largest element of array is %d", max);

    return 0;
}