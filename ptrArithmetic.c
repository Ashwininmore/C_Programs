#include<stdio.h>
void main()
{
    int x=23;
    int *ptr;
    ptr = &x;

    printf("\n Value of x=%d",x);
    printf("\n Address of x=%u",&x);
    printf("\n Value of ptr=%u",ptr);
    printf("\n Address of ptr=%u",&ptr);
    // printf("\n Value inside ptr=%d",*ptr);
    ptr++;
    printf("\n Value of ptr=%u",ptr);
    ptr--;
    printf("\n Value of ptr=%u",ptr);
}