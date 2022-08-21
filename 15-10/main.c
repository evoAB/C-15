#include <stdio.h>
#include <stdlib.h>
void frequency(int []);
int main()
{
    int a[10];
    printf("Enter 10 elements in array : ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Frequency of each element of an array");
    frequency(a);
    return 0;
}
void frequency(int a[])
{
    int freq[100]={0};
    for(int i=0; i<10; i++)
    {
        freq[a[i]]++;
    }
    for(int i=0; i<100; i++)
        if(freq[i]>0)
            printf("\n%d = %d",i,freq[i]);

}
