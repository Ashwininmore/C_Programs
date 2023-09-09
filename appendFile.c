#include<stdio.h>
struct Student{
    int rno;
    char nm[20];
    float res;
};
void main(){
    struct Student s[3];
    FILE *fp;
    int i;
    fp=fopen("f4.txt","a");
    for(i=0;i<3;i++){
        printf("\n Enter Rollno,Name,Result:");
        scanf("%d%s%f",&s[i].rno,s[i].nm,&s[i].res);
        fprintf(fp,"%d\t%s\t%f",s[i].rno,s[i].nm,s[i].res);
    }
    fclose(fp);
    fp=fopen("f4.txt","r");
    while((i=fgetc(fp))!=-1){
        printf("%c",i);
    }
    fclose(fp);
}