// 1 0 1 0 1
//   0 1 0 1
//     1 0 1
//       0 1
//         1

#include <stdio.h>
int main()
{
    int i, j, space;

    for (i = 1; i <= 5; i++)
    {
        for (space = 1; space <= i-1; space++)
        {
            printf(" ");
        }
        for (j = i; j <= 5; j++)
        {
            if (j % 2 != 0)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
}