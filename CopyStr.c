#include<stdio.h>
void main()
{
    char a[6], b[6];
    int i=0;
    printf("\n Enter the first string:");
    scanf("%s",a);
    while(a[i]!='\0'){
        b[i]=a[i];
        i++;
    }
    printf("\n Second string is:%s",b);

}