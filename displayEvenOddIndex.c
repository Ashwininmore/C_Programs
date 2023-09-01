#include<stdio.h>
void main()
{
    int a[20], i, n;
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
            printf("\n Even Index=%d\t Array Element=%d\n",i, a[i]);
        }
        else{
            printf("\n Odd Index=%d\t Array Element=%d\n",i, a[i]);
        }
    }
}