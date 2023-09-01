#include<stdio.h>
void main()
{
    int i, j, temp, a[5];
    printf("\n Enter array elments:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\n Sorted Array Elements:");
    for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
}