#include<stdio.h>
#include<string.h>
union Employee{
    int id;
    char nm[20];
    float sal;
};
void main(){
    union Employee e;
    e.id=100;
    e.sal=23000;
    strcpy(e.nm,"Ashu");
    printf("\n Id:%d \t Name:%s \t Salary:%f",e.id,e.nm,e.sal);

}
