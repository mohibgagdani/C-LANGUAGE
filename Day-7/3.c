#include <stdio.h>

int main() {
    int number = 1, N;

    printf("Enter any number: ");
    scanf("%d", &N);

    while (number <= N) 
    {
        printf("%d ", number);
        number++;
    }

}
