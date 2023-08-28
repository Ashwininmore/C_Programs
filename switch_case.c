#include<stdio.h>
int main(){
    int x, y;
    char ch;
    printf("Enter the numbers to perform opration:");
    scanf("%d%d",&x,&y);
    printf("Enter the operator +, -, /, * :");
    scanf(" %c",&ch);
    switch(ch){
        case '+': printf("Addition is: %d",(x+y));
        break;
        case '-': printf("Addition is:%d",(x-y));
        break;
        case '/': printf("Addition is:%d",(x/y));
        break;
        case '*': printf("Addition is:%d", (x*y));
        break;
        default: printf("!!!!Invalid Enter!!!!");

    }

    return 0;
}