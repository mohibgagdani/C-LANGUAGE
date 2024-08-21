#include <stdio.h>

int main() 
{
    float a1, a2, a3;

    printf("Enter the first angle of the triangle: ");
    scanf("%f",&a1);

    printf("Enter the second angle of the triangle: ");
    scanf("%f",&a2);

    a3 = 180-(a1+a2);

    printf("The third angle of the triangle is: %f \n",a3);

}
