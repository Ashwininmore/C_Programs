#include<stdio.h>
#include<string.h>
void main()
{
    char a[10]="Ashwini";
    char b[10]="More";
    printf("\n Length:%d",strlen(a));
    printf("\n Length:%d",strlen("Hii"));
    printf("\n Stringin uppercase:%s",strupr(a));
    printf("\n Stringin lowercase:%s",strlwr(a));
    int x=strcmp(a,b);
    if(x==1){
        printf("\n Strings are not same!!!");
    }
    else{
        printf("\n strings are same!!!");
    }
    printf("\n string after concatination:%s",strcat(a,b));
    printf("\n String copy:%s",strcpy(a,b));
    printf("\n String copy:%s",strcpy(a,"Ashu"));
    printf("\nReversed String:%s",strrev(a));
}