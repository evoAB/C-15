#include <stdio.h>
#include <stdlib.h>
void rotated(int [], int, int);
int main()
{
    int arr[5], d;
    printf("Enter size 5 array : ");
    for(int i=0; i<5; i++)
        scanf("%d",&arr[i]);
    printf("Rotations : ");
    scanf("%d",&d);
    printf("Rotated array : ");
    rotated(arr,5,d);
    return 0;
}
void rotated(int a[], int n, int d)
{
    for(int i=0; i<d; i++)
    {
        int temp = a[0];
        for(int j=0; j<n; j++)
            a[j]=a[j+1];
        a[n-1]=temp;
    }
    for(int k=0; k<n; k++)
        printf("%d ",a[k]);
}
