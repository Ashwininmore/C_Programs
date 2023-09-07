#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p,i,n,m;
    printf("\n Enter Array Size:");
    scanf("%d",&n);
    //calloc
    p=(int*)malloc(sizeof(int)*n);
    printf("\n Enter Array Elements:");
    for (i=0;i<n;i++){
        scanf("%d",(p+i));
    }
    printf("\nHow many elements you want to add:");
    scanf("%d",&m);
    //realloc
    p=(int*)realloc(p,m);
    for (i=0;i<(n+m);i++){
        scanf("%d\t",(p+i));
    }
     printf("\nArray Elements:");
    for (i=0;i<(n+m);i++){
        printf("%d\t",*(p+i));
    }
    p=NULL;
}