#include<stdio.h>
void main()
{
    int x, y, i, sum=0;
    printf("\n Please enter ypur range:");
    scanf("%d%d", &x,&y);
    for(i=x;i<=y;i++)
    {
        if(i%2!=0){
            continue;
        }
        sum= sum + i;
    }
    printf("Sum: %d", sum);
}