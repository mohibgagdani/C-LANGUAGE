#include <stdio.h>
int main()
{
    float celsius,fahrenheit;
    
    printf("Enter the temp. in cel. :");
    scanf("%f",&celsius);

    fahrenheit=(1.8*celsius)+32;
    printf("\n temp. in fah. : %f",fahrenheit);

}