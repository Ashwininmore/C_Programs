#include<stdio.h>
void main(int argc, char *argv[])
{
    int i,sum=0;;
    for(i=0;i<argc;i++){
        printf("\n%s",argv[i]);
    }
    for(i=0;i<argc;i++){
        sum=sum+(atoi(argv[i]));//atoi=ascii to integer function
        
    }
    printf("\nSum of arguments:%d",sum);
}