//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *

#include <stdio.h>

int main()
{
    int i, j, space;

    for (i = 1; i <=5 ; i++)
    {
        for ( space = i; space <=4; space++)
        {
           printf(" ");
        }
        
        for (j = i; j >=1 ; j--)
        {
            printf("*");
        }

         for (j = i-1; j >=1 ; j--)
        {
            printf("*");
        }

        printf("\n");
    }
}