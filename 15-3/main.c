#include <stdio.h>
#include <stdlib.h>
void sorted(int [], int);
int main()
{
    int a[10],i;
    printf("Enter 10 numbers : ");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    printf("Sorted array : ");
    sorted(a,10);
    return 0;
}
void sorted(int arr[], int n)
{
    int i,j;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(arr[i]<arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}
