//demo for automatic variables
#include<stdio.h>
void fun1();
void fun2();
void main(){
    int x=100;
    fun2();
    printf("\n Value of x:%d",x);
}
void fun1(){
    auto int x=10;
    printf("\n Vakue of x=%d",x);
}
void fun2(){
    int x=1;
    fun1();
    printf("\n Vakue of x=%d",x);
}