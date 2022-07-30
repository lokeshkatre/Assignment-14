#include<stdio.h>
int main()
{
    int arr1[10],arr2[10];
    printf("Enter array:");
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr1[i]);
    //storing values of arr1 in arr2
    for(int i=0;i<10;i++)
        arr2[i]=arr1[i];
    //printing second array arr2
    printf("\nSecond array after storing values from first array:\n");
    for(int i=0;i<10;i++)
        printf("%d ",arr2[i]);
    return 0;
}