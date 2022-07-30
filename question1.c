#include<stdio.h>
int main()
{
    int arr[10],sum=0;
    printf("Enter elements in array :");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("\nThe sum of elements are %d",sum);
    return 0;
}