#include<stdio.h>
void main()
{
    int a[3][3],i,j,sd=0,snd=0;
    printf("\n Enter thematrix elements:");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n Matrix Elements is:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i==j){
                sd=sd+a[i][j];
            }
            else{
                snd=snd+a[i][j];
            }
        }
    }
    printf("\n Sum of diagonal elments is: %d",sd);
    printf("\n Sum of non-diagonal elments is: %d",snd);
}