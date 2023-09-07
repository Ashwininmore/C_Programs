#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p,i,n;
    printf("\n Enter Array Size:");
    scanf("%d",&n);
    //malloc
    p=(int*)malloc(sizeof(int)*n);
    printf("\n Enter Array Elements:");
    for (i=0;i<n;i++){
        scanf("%d",(p+i));
    }
    printf("\nArray Elements:");
    for (i=0;i<n;i++){
        printf("%d\t",*(p+i));
    }
    free(p);
}