#include<stdio.h>
void main()
{
    char s1[5], s2[5];
    int i,temp= 0;
    printf("\n Enter string1:");
    scanf("%s",s1);
    printf("\n Enter string2:");
    scanf("%s",s2);
    for(i=0;s1[i]!='\0';i++){
        if(s1[i]==s2[i]){
            temp =1;
        }
        else{
            temp=0;
            break;  //imp without this break prg will not work
        }
    }
    if(temp==1){
        printf("\n Strings are same!!!");
    }
    else{
        printf("\n Strings are not same!!!");
    }
}