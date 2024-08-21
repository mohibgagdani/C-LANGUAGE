#include<stdio.h>

int main()
{
    int x;

    printf("Enter the value :");
    scanf("%d",&x);
    
    if (x==0)
    {
        printf("value is Neutral.");
    }
    else if (x>0)
    {
        printf("value is Positive.");
    }
    else
    {
        printf("value is Negative.");
    }
    
    
}