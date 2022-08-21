#include <stdio.h>
#include <stdlib.h>
void duplicate (int []);
int main()
{
    int arr[10];
    printf("Enter elements of size 10 in array : ");
    for(int i=0;i<10;i++)
        scanf("%d",&arr[i]);
    printf("Duplicated numbers : ");
    duplicate(arr);
    return 0;
}
void duplicate(int a[])
{
    int count=0;
    for(int i=0; i<10; i++)
    {
        for(int j=i; j<10; j++)
        {
            if(a[i]==a[j] && i!=j)
                count++;
        }
    }
    printf("%d",count);
}
