#include<stdio.h>
//Function Declaration
void area();

void main()
{
    area();   //Function Calling
}
//Function Defination
void area()
{
    float side;
    printf("\n Enter the side of square:");
    scanf("%f", &side);
    printf("Area of square is: %f", (side*side));
}
