#include<stdio.h>
int x=100; //global
void show();
void main(){
    int x=20; //local
    printf("\n Value of x=%d",x);
    show();
}
void show(){
    extern int x;
    printf("\n Value of x=%d",x);
}