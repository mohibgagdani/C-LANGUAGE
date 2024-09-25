// 5
// 4 5
// 3 4 5
// 2 3 4 5
// 1 2 3 4 5

#include <stdio.h>

int main() 
{
    int rows = 5;

    for (int i = rows; i >= 1; i--) 
    { 
        for (int j = i; j <= rows; j++) 
        { 
            printf("%d ", j);
        }
        printf("\n");
    }

}



// 1 1 1 1 1
// 2 2 2 2
// 3 3 3
// 4 4
// 5

#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) { 
        for (int j = i; j <= rows; j++) { 
            printf("%d ", i);
        }
        printf("\n"); 
    }

}





// 1 0 1 0 1
// 1 0 1 0
// 1 0 1
// 1 0
// 1

#include <stdio.h>

int main() 
{
    int rows = 5;

    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < rows - i; j++) 
        {
            
            if (j % 2 == 0) 
            {
                printf("1 ");
            } 
            else 
            {
                printf("0 ");
            }
        }
        printf("\n"); 
    }
   
}





// A
// B A
// C B A
// D C B A
// E D C B A

#include <stdio.h>

int main() 
{
    int rows = 5;
    char ch;

    for (int i = 0; i < rows; i++) 
    {
        ch = 'A' + i; 
        for (int j = 0; j <= i; j++) 
        {
            printf("%c ", ch--);
        }
        printf("\n");
    }

}





// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

#include <stdio.h>

int main() 
{
    int rows = 5; 
    int number = 1;

    for (int i = 1; i <= rows; i++) 
    {
        for (int j = 1; j <= i; j++) 
        {
            printf("%d ", number++);
        }
        printf("\n"); 
    }

}






//         5
//       4 5
//     3 4 5
//   2 3 4 5
// 1 2 3 4 5

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
            printf("%d",j);
        }
        printf("\n");
    }
}







// 5 4 3 2 1
//   4 3 2 1
//     3 2 1
//       2 1
//         1

#include <stdio.h>
int main()
{
    int i, j, space;

    for (i = 5; i >=1 ; i--)
    {
        for (space = i+1; space <=5 ; space++)
        {
            printf(" ");
        }
        for (j = i; j >=1 ; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}





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
            printf(" ");
        }
        for (j = 5; j >=i ; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}






// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4     4 3 2 1
// 1 2 3         3 2 1
// 1 2             2 1
// 1                 1

#include <stdio.h>
int main()
{
    int i, j, space;

    for (i = 5; i >= 1; i--)
    {

        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (space = i; space <= 4; space++)
        {
            printf(" ");
        }

        for (space = i; space <= 4; space++)
        {
            printf(" ");
        }

        for (j = i; j >= 1; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }
    
    
}






// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4     4 3 2 1
// 1 2 3         3 2 1
// 1 2             2 1
// 1                 1
// 1                 1
// 1 2             2 1
// 1 2 3         3 2 1
// 1 2 3 4     4 3 2 1
// 1 2 3 4 5 5 4 3 2 1

#include <stdio.h>
int main()
{
    int i, j, space;

    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (space = i; space <= 4; space++)
        {
            printf(" ");
        }
        for (space = 4; space >= i; space--)
        {
            printf(" ");
        }
        for (j = i; j >= 1; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (space = i; space <= 4; space++)
        {
            printf(" ");
        }
        for (space = i; space <= 4; space++)
        {
            printf(" ");
        }
        for (j = i; j >= 1; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }
}




