#include<stdio.h>
int factno(int);
void main()
{
    int n;
    printf("\n Enter the number:");
    scanf("%d",&n);
    printf("\n Factorial of %d is: %d",n, factno(n));

}
int factno(int n)
{
    if(n==1 || n==0){
        return 1;
    }
    else{
        return(n*factno(n-1));
    }
}