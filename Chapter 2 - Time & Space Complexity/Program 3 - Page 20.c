#include <stdio.h>

int main() {

    int i, n, result = 0;

    scanf("%d", &n);

    for ( i = 1; i <= n; i++ ) {
        result = result + i;
    }

    printf("result = %d\n", result);

    return 0;
}

// Time Complexity is O(n) - Order of n

// Space Complexity is O(1)
