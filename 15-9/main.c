#include <stdio.h>
#include <stdlib.h>
void merge(int [],int []);
int main()
{
    int a[]={1,4,5,7,9};
    int b[]={2,3,6,8,10};
    printf("Merge two arrays of the same size : ");
    merge(a,b);
    return 0;
}

void merge(int a[], int b[])
{
    int c[10];
    int i=0,j=0;
    for(int k=0;k<10;k++)
    {
        if(a[i]<b[j] && i<5)
        {
            c[k]=a[i];
            i++;
        }
        else if(j<5)
        {
            c[k]=b[j];
            j++;
        }
        else
        {
            c[k]=a[i];
            i++;
        }

    }
    for(int i=0;i<10;i++)
        printf("%d ",c[i]);
}
