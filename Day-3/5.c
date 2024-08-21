#include<stdio.h>
int main()
{
    int x,y;

    printf("enter the value of x : ");
    scanf("%d",&x);

    printf("enter the value of y : ");
    scanf("%d",&y);

    x=x+y;
    y=x-y;
    x=x-y;
    

    printf("value of x is : %d \n",x);
    printf("value of y is : %d",y);

}