#include<stdio.h>
void main()
{
    int a[5],i,n,count=0;
    printf("\n Enter array elements:");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("\n Enter the no. to be search:");
    scanf("%d",&n);
    for(i=0;i<5;i++){
        if(n==a[i]){
            printf("\n Element found at index=%d",i);
            // break;
        }
        count++;
        if(count==5){
            printf("\n Element not found ");
        }
    }
}