//         1
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1

#include <stdio.h>

int main()
{
    int i, j, space;

    for (i = 1; i <= 5; i++)
    {
        for ( space = i; space <=4 ; space++)
        {
            printf(" ");
        }
        
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        
        for (j = i-1; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}