#include<stdio.h>
int main()
{
    int arr[10],es=0,os=0;
    printf("Enter elements in array :");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        es=es+arr[i];
        else
        os=os+arr[i];

    }
    printf("\nThe sum of even elements are %d",es);
    printf("\nThe sum of odd elements are %d",os);
    return 0;
}