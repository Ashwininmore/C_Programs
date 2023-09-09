#include<stdio.h>
void show();
void main(){
    int i;
    for(i=0;i<3;i++){
        show();
    }
}
void show(){
    static int x=10;
    int y=10;
    x++;
    y++;
    printf("\n Value of x:%d\tValue of x:%d",x,y);
}