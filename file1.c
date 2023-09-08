//demo for fputs(), fgets() function
#include<stdio.h>
void main()
{
    // create file ptr
    FILE *fp;
    char ch[70];
    // open file(wrie mode)
    fp=fopen("f2.txt","w");
    // write into file
    fputs("C is a middle level language. \nIt is invented in 1972.",fp);
    fclose(fp);
    // read file
    fp=fopen("f2.txt","r");
    fgets(ch,300,fp); //300 is a buffer size
    printf("%s",ch); //here it only gets the sentence which is in 1 line not multiple lines
    fclose(fp);
}