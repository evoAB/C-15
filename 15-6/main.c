#include <stdio.h>
#include <stdlib.h>
void reverse(int []);
int main()
{
    int arr[5];
    printf("Enter 5 size array : ");
    for(int i=0; i<5; i++)
        scanf("%d",&arr[i]);
    printf("Reverse array : ");
    reverse(arr);
    return 0;
}
void reverse(int a[])
{
    for(int i=0; i<3; i++)
    {
        int temp=a[i];
        a[i]=a[4-i];
        a[4-i]=temp;
    }
    for(int i=0;i<5;i++)
        printf("%d ",a[i]);
}
