#include<stdio.h>
struct Bday {
    int d,m,y;
};
struct Employee{
    int id;
    char nm[10];
    float sal;
    struct Bday b;
};
void main(){
    struct Employee e;
    printf("\n Enter employee details:");
    scanf("%d%s%f%d%d%d",&e.id,e.nm,&e.sal,&e.b.d,&e.b.m,&e.b.y);
    printf("\n Employee details are:");
    printf("\n Id=%d \t Name=%s \t Salary=%f \t Birthdate=%d/%d/%d",e.id,e.nm,e.sal,e.b.d,e.b.m,e.b.y);
}