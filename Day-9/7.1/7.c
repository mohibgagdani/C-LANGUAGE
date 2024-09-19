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
