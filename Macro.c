#include<stdio.h>
#define SIZE 5
void main()
{
    int a[SIZE], i;
    printf("\n Enter array Elements:");
    for(i=0;i<SIZE;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Array elemets are:");
    for(i=0;i<SIZE;i++)
    {
        printf("\n Array element @ index[%d]:%d\t",i,a[i]);
    }
}