#include<stdio.h>
struct mystruct{
    char nm[10];
    int no,rank;
};
void main()
{
    struct mystruct var={"Meera",10,2};
    struct mystruct *ptr;
    ptr=&var;
    printf("\n Name=%s",ptr->nm);
    printf("\n Rollno=%d",ptr->no);
    printf("\n Rank=%d",ptr->rank);
}