//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *


#include <stdio.h>

int main() {
    int n = 5; 
    int space, stars, i, j;

    for (i = 1; i <= n; i++) {
       
        for (space = 1; space <= n - i; space++) {
            printf("  ");
        }
        
        for (stars = 1; stars <= (2 * i - 1); stars++) {
            printf("* ");
        }
        printf("\n");
    }

}
