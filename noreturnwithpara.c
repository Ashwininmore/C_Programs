#include<stdio.h>
void area(int);
void main()
{
    int r;
    printf("\nEnter the radius of circle:");
    scanf("%d",&r);
    area(r);
}
void area(int r1)
{
    float x;
    x= 3.14*r1*r1;
    printf("\n Area of the circle is: %f",x);
}