#include<stdio.h>
void main()
{
    char x[6],i;
    printf("\n Enter the string:");
    for(i=0;i<6;i++){
        scanf("%c",&x[i]);
    }
    printf("\nstring is:");
    for(i=0;i<6;i++){
        printf("%c",x[i]);
    }
}