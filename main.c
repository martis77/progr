#include <stdio.h>

int main() {
    int n = 5;

    for (int r = 0; r < n; r++) {
        for (int c = 0; c < n; c++) {
            
            if (c <= r) {
                printf("*");
            } else {
                printf(" ");
            }

        }
        printf("\n");
    }
    return 0;
}
