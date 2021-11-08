#include <stdio.h>

int main() {

    int i, j, n, count = 0;

    scanf("%d", &n);

    for ( i = 1; i <= n; i++ ) {
        for ( j = 1; j <= n; j++ ) {
            count = count + 1;
        }
    }

    printf("n = %d, count = %d\n", n, count);

    return 0;
}

// Time Complexity is O(n^2) - Order of n square

// Space Complexity is O(1)
