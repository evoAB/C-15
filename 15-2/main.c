#include <stdio.h>
#include <stdlib.h>
int smallest(int [], int);
int main()
{
    int a[10];
    printf("Enter 10 numbers : ");
    for(int i=0; i<10; i++)
        scanf("%d",&a[i]);
    printf("Smallest number : %d",smallest(a, 10));
    return 0;
}

int smallest(int arr[], int n)
{
    int small;
    for(int i=0;i<n;i++)
    {
        if(i==0)
            small=arr[i];
        if(small>arr[i])
            small = arr[i];
    }
    return small;
}
