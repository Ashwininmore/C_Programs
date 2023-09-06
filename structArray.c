#include<stdio.h>
struct Student
{
    int rno;
    char nm[10];
    float res;
};
void main()
{
    int i;
    struct Student s[3];
    printf("\n Enter array elements:");
    for(i=0;i<3;i++){
        scanf("%d%s%f",&s[i].rno,s[i].nm,&s[i].res);
    }
    printf("\n Array is:");
    for(i=0;i<3;i++){
        printf("\n Rollno=%d \t Name=%s \t Result=%f",s[i].rno,s[i].nm,s[i].res);
    }
}