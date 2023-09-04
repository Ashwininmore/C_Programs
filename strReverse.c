#include<stdio.h>
void main()
{
    int a[9],i=0,j=0;
    printf("\n Enter string:");
    scanf("%s",a);
    while(a[i]!='\0')
    {
        i++;
    }
    printf("\n Reversed string is:");
    for(j=i-1;j>=0;j--){
        printf("%c",a[j]);
    }
}