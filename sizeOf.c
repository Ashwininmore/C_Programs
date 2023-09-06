#include<stdio.h>
struct Student{
    int rno;
    char nm[20];
    float res;
};
void main(){
    struct Student s;
    printf("\n Size of interger=%d",sizeof(s.rno));
    printf("\n Size of chracter array=%d",sizeof(s.nm));
    printf("\n Size of float=%d",sizeof(s.res));
    printf("\n Size of total memory of structure=%d",sizeof(struct Student));
}