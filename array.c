#include<stdio.h>
void main()
{
    int a[7], i;
    printf("\n Enter the 7 elements in the array:");
    for(i=0;i<7;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Array elemets are:");
    for(i=0;i<7;i++)
    {
        printf("\n Array element @ index[%d]:%d\t",i,a[i]);
    }
}