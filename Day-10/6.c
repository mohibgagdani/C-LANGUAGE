// 5 4 3 2 1
//   5 4 3 2
//     5 4 3 
//       5 4
//         5 

#include <stdio.h>
int main()
{
    int i, j, space;

    for (i = 1; i <=5 ; i++)
    {
        for (space = 1; space <=i-1 ; space++)
        {
            printf("-");
        }
        for (j = 5; j >=i ; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
