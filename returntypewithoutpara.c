#include<stdio.h>
float area();
void main()
{
    float x=area();
    printf("\n Area of circle: %f", x);
}
float area()
{
    int r;
    printf("\n Enter the radius of circle:");
    scanf("%d",&r);
    return(3.14*r*r);
}