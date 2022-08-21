#include <stdio.h>
#include <stdlib.h>
void unique(int []);
int main()
{
    int arr[10];
    printf("Enter 10 elements in array : ");
    for(int i=0;i<10;i++)
        scanf("%d",&arr[i]);
    printf("Unique elements in array : ");
    unique(arr);
    return 0;
}
void unique(int a[])
{
    int flag;
    for(int i=0;i<10;i++)
    {
        flag=0;
        for(int j=0;j<10;j++)
            if(a[i]==a[j] && i!=j)
            {
                flag=1;
                break;
            }
        if(flag==0)
            printf("%d ",a[i]);
    }

}
