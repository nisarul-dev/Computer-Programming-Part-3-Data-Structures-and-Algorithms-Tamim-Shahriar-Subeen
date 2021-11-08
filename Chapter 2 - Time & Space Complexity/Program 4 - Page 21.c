#include <stdio.h>

int main() {

    int n;

    scanf("%d", &n);

    if ( n % 2 == 0 ) {
        printf("%d is even number.\n", n);
    } else {
        printf("%d is odd number.\n", n);
    }

    return 0;
}

// Time Complexity is O(1) - Order of 1

// Space Complexity is O(1)
