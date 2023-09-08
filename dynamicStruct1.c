#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Student
{
    int rno;
    char name[10];
    float result;
};
void main()
{
    int n,i;
    printf("\n Enter no. of data you want to enter:");
    scanf("%d",&n);
    //structure variable
    struct Student *s = (struct Student *)malloc(n * sizeof(struct Student));
    for (i=0;i<n;i++){
        printf("\nEnter Student Name,Rollno, Result:");
        scanf("%s%d%f",(s+i)->name,&(s+i)->rno,&(s+i)->result);
    } 
    printf("\n Student Details:\n Roll no:\t Name:\t Result:\t");
    for (i=0;i<n;i++){
        printf("\n %s\t%d\t%f\t",(s+i)->name,(s+i)->rno,(s+i)->result);
    } 
    free(s);
   
}   