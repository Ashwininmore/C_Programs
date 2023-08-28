#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the student Marks : ");
    scanf("%d", &marks);
    if(marks>75){
        printf("\n You Got Distinction!!");
    }
    else if(marks<75 && marks>60){
        printf("\n You Got First Class!!");
    }
    else if(marks<60 && marks>=50){
        printf("\n You Got Second Class!!");
    }
    else if(marks<50 && marks>=35){
        printf("\n Pass!");
    }
    else{
        printf("\n Failll!");
    }
}