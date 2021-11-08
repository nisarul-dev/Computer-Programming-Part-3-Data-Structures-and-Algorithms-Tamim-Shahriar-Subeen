#include <stdio.h>

int main() {

    int i, j, k, n, count = 0;

    scanf("%d", &n);

    for ( i = 1; i <= n; i++ ) {
        for ( j = 1; j <= n; j++ ) {
            for ( k = 1; k <= n; k++ ) {
                count = count + 1;
            }
        }
    }

    printf("n = %d, count = %d\n", n, count);

    return 0;
}

// Time Complexity is O(n^3) - Order of n cube

// Space Complexity is O(1)
