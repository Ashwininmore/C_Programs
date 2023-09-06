#include<stdio.h>
typedef struct Employee{
    int id;
    char nm[20];
    float sal;
}emp;
void main()
{
    // emp e;
    printf("\n Memory allocated to structure:%d",sizeof(emp));
}