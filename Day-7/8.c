#include <stdio.h>

int main() {
    int i = 2, n;

    printf("Enter any number: ");
    scanf("%d", &n);

    printf("Even numbers from 1 to %d are: ", n);

    do {
        if (i % 2 == 0) 
        {
            printf("%d ", i);
        }
        i += 2;
    } 
    while (i <= n);

}
