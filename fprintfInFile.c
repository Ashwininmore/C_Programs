#include<stdio.h>
void main(){
    FILE* fp;
    char ch[50];
    fp=fopen("f3.txt","w");
    fprintf(fp, "Hello Everyone");
    fclose(fp);
    fp=fopen("f3.txt","r");
    fscanf(fp,"%s",ch); // it doesn't accept the space
    printf("%s",ch);

    fclose(fp);
}

//output:
//Hello