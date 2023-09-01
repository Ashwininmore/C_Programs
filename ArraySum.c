#include<stdio.h>
void main()
{
    int a[5], i, sum=0;
    printf("\n Enter the array elemnts:");
    for (i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for (i=0;i<5;i++){
        sum=sum+a[i];
    }
    printf("\n Sum of Array Element: %d",sum);
}