#include<stdio.h>
void main()
{
    int x=23;
    int *ptr1;
    ptr1=&x;

    int **ptr2;
    ptr2=&ptr1;

    int ***ptr3;
    ptr3=&ptr2;

    printf("\n Value of x=%d",x);
    printf("\n Address of x=%u",&x);
    printf("\n");
    printf("\n Value of ptr=%u",ptr1);
    printf("\n Address of ptr=%u",&ptr1);  
    printf("\n Value inside ptr=%d",*ptr1);  
    printf("\n");
    printf("\n value of ptr2=%u",ptr2);
    printf("\n Address of ptr2=%u",&ptr2);
    printf("\n Value inside ptr2=%d",**ptr2);
    printf("\n");
    printf("\n value of ptr3=%u",ptr3);
    printf("\n Address of ptr3=%u",&ptr3);
    printf("\n Value inside ptr3=%d",***ptr3);
}