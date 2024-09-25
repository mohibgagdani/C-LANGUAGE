//         1
//       2 1
//     3 2 1
//   4 3 2 1
// 5 4 3 2 1

#include <stdio.h>
int main()
{
    int i, j, space;

    for (i = 1; i <= 5; i++)
    {
        for (space = i; space <= 4; space++)
        {
            printf("");
        }
        for (j = i; j >= 1; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}