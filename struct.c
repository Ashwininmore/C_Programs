#include<stdio.h>
#include<string.h>
struct Student
{
    int rno;
    char name[10];
    float result;
};
void main()
{
    //structure variable
    struct Student s,s1;
    s.rno=25;
    strcpy(s.name,"Ashwini");
    s.result=96.20;
    printf("\n First Student:\n Roll no:%d \t Name:%s \t Result:%f",s.rno,s.name,s.result);
    printf("\nEnter Student Details:");
    scanf("%d%s%f",&s1.rno,s1.name,&s1.result);
    printf("\n Second Student:\n Roll no:%d \t Name:%s \t Result:%f",s1.rno,s1.name,s1.result);
}   