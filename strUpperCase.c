//Convert string to uppercase
#include<stdio.h>
void main()
{
    char s[6];
    int i;
    printf("\n Enter string:");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='a' && s[i]<='z'){
            s[i]=s[i]-32;
        }
    }
    printf("\n String in uppercase:%s",s);
}
    