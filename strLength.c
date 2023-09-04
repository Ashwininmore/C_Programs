#include<stdio.h>
void main()
{
    char a[5];
    int i=0,len=0;
    printf("\n Enter string:");
    scanf("%s",a);
    while(a[i]!='\0')
    {
        i++;
    }
    // while(a[i]!='\0'){
    //     len=len+1;
    //     len+=1; //or
    //     i++;
    // }
    printf("Length of string is:%d",i);
}