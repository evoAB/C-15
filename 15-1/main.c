#include <stdio.h>
#include <stdlib.h>
int greatest(int[],int);
int main()
{
    int a[10];
    printf("Enter 10 numbers : ");
    for(int i=0; i<10; i++)
        scanf("%d",&a[i]);
    printf("Greatest number : %d",greatest(a,10));
    return 0;
}
int greatest(int arr[],int n)
{
    int great=0;
    for(int i=0;i<n;i++)
    {
        if(great<arr[i])
            great = arr[i];
    }
    return great;
}
