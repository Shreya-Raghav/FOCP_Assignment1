#include <stdio.h>
int main() {
    int n;
    printf("Enter the size of the butterfly pattern: ");
    scanf("%d", &n);

    int half = (n + 1) / 2;

    for (int i = 1; i <= half; i++) {
        for (int j = 1; j <= i; j++)
            printf("*");

        for (int j = 1; j <= 2 * (half - i) + 1; j++)
            printf(" ");

        for (int j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }

    for (int i = half - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++)
            printf("*");

        for (int j = 1; j <= 2 * (half - i) + 1; j++)
            printf(" ");

        for (int j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}