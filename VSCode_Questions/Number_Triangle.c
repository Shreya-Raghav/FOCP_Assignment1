#include <stdio.h>
int main() {
    int n;
    printf("Enter the size of the number triangle: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
            if (j < i) printf(" ");
        }
        printf("\n");
    }
    return 0;
}