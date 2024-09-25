//         5
//       4 4
//     3 3 3
//   2 2 2 2
// 1 1 1 1 1

#include <stdio.h>
int main()
{
    int i, j, space;

    for (i = 5; i >= 1; i--)
    {
        for (space = i-1; space >= 1; space--)
        {
            printf(" ");
        }
        for (j = i; j <= 5; j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}