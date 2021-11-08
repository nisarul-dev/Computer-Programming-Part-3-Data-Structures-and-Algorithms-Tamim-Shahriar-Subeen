#include <stdio.h>

int main() {

    int n, result;

    scanf("%d", &n);

    result = n * ( n + 1 ) / 2;

    printf("result = %d\n", result);

    return 0;
}

// Time Complexity is O(1) - Order of 1

// Space Complexity is O(1)
