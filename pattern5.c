#include<stdio.h>
void main()
{
    int i, j;
    for(i=1, j=5;i<=5,j>=1;i++,j--){
        if(i==j){
            continue;
        }
        printf("\n%d %d\n", i, j);
    }

}