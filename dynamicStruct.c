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
    printf("\nEnter Student Details:");
    for (i=0;i<n;i++){
      
        scanf("%s", s[i].name);
     
        scanf("%d", &s[i].rno);
      
        scanf("%f", &s[i].result);
    } 
    // printf("\n Student Details:\n Roll no:\t Name: \t Result:");
    for (i=0;i<n;i++){
         printf("Name: ");
        printf("%s", s[i].name);
        printf("Roll Number: ");
        printf("%d", s[i].rno);
        printf("Marks: ");
        printf("%f", s[i].result);
    } 
    free(s);
   
}   