#include <stdio.h>

int main()
{
    int gs, bs, da, hra, ta;
    printf("Enter your Basic Salary : ");
    scanf("%d", &bs);

    da = (bs * 5) / 100;
    hra = (bs * 10) / 100;
    ta = (bs * 8) / 100;
    gs = bs + da + hra + ta;

    printf("\n Gross Salary is : %d", gs);
}