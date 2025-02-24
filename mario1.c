#include <stdio.h>

int main() {
    int rows;

    printf("How many rows do you want? ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf("#");
        }

        printf("\n");
    }

    return 0;
}
