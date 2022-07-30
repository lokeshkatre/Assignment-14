#include <stdio.h>
int main()
{
    int arr[10];
    printf("Enter array:");
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < 10; i++)
        for (int j = i + 1; j < 10; j++)
        {
            int temp;
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    // we have sorted array
    //  so the 2nd element will be second smallest with is arr[1]
    printf("\nThe second largest element of array is %d", arr[1]);
    return 0;
}