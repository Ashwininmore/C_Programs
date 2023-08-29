#include<stdio.h>
float area(int);
void main()
{
    int r;
    printf("\n Enter the radius of circle");
    scanf("%d",&r);
    
    float x =area(r);
    printf("\n Area of circle is:%f", x);
}
float area(int r1)
{
    return(3.14*r1*r1);
}

