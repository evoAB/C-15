#include <stdio.h>
#include <stdlib.h>
void adjDup(int []);
int main()
{
    int a[5];
    printf("Enter 5 elements in  the array : ");
    for(int i=0;i<5;i++)
        scanf("%d",&a[i]);
    printf("Duplicate element in array : ");
    adjDup(a);
    return 0;
}

void adjDup(int arr[])
{
    for(int i=1;i<5;i++)
        if(arr[i]==arr[i-1])
            printf("%d ",arr[i]);
}
