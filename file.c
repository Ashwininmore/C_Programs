//demo for fputc(), fgrtc(),fopen,fclose function
#include<stdio.h>
void main()
{
    // create file ptr
    FILE *fp;
    // open file(wrie mode)
    fp=fopen("f1.txt","w");
    // write into file
    fputc('H',fp);
    fputc('S',fp);
    fputc('s',fp);
    fclose(fp);
    // read file
    fp=fopen("f1.txt","r");
    char i;
    while(i=fgetc(fp)!=-1){ //-1/EOF means End of file
        printf("%c",i);
    }
    fclose(fp);
}