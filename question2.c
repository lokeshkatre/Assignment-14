#include<stdio.h>
int main()
{
    int arr[10];
    int sum=0;
    printf("Enter elements in array :");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);    
    }
    for(int i=0;i<10;i++)
    {
       sum=sum+arr[i];
    }
    float avg =(float)sum/10;
    printf("The average of elements is %.2f",avg);
    return 0;
}