#include <stdio.h>
int main() {
    int n;
    printf("Enter the size of the checkerboard: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i + j) % 2 == 0)
                printf("X");
            else
                printf("O");
        }
        printf("\n");
    }
    return 0;
}