#include<stdio.h>
void main()
{
    int n, i, fac=1;
    printf("\n Enter the no.:");
    scanf("%d", &n);
    for(i=n;i>=1;i--)
    {
        fac=fac*i;
    }
    printf("\n Factorial of %d is: %d",n, fac);
}