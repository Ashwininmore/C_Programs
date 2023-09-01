#include<stdio.h>
void main()
{
    int a[20], i, n, sum1=0, sum2=0;
    printf("\n Enter size of array:");
    scanf("%d",&n);
    printf("\n Enter array elments:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2 == 0){
            sum1=sum1+a[i];
        }
        else{
            sum2=sum2+a[i];
        }
    }
    printf("\n Sum of Even Indexes:%d",sum1);
    printf("\n Sum of Odd Indexes:%d",sum2);
}