#include<stdio.h>

int main()
{
    int a,b,x;

    printf("enter the value of a:");
    scanf("%d",&a);

    printf("enter the value of b:");
    scanf("%d",&b);

    x=a%b;
    printf("x = %d",x);
}