#include<stdio.h>
void main()
{
    char s1[20], s2[10];
    int length=0,j;
    printf("\n Enter string1:");
    scanf("%s",s1);
    printf("\n Enter string2:");
    scanf("%s",s2);
    while(s1[length]!='\0'){
        length++;
    }
    for(j=0;s2[j]!='\0';j++,length++){
        s1[length]=s2[j];
    }
    // for termination of string
    s1[length]='\0';
    printf("\n After Concatination:%s",s1);
    
}