#include <stdio.h>

void insertion_sort( int A[], int n ) {
    int i, j, k, item;

    for ( i = 1; i < n; i++ ) {
        // Assigning A[i] into item.
        item = A[i];

        // Lets find the perfect place for item
        j = i - 1;

        while ( j >= 0 && A[j] > item) {
        // keeping A[j] to the next box (j+1)
            A[j+1] = A[j];
            j--;
        }

        // Now, A[j+1] is the perfect place for the item
        A[j+1] = item;
    }
}


int main() {

    int nums[] = { 1, 3, 5, 9, 8, 7};
    int n = 6;

    insertion_sort( nums, n );

    for (int i = 0; i < n; i++) {
        printf("%d\n", nums[i]);
    }

    return 0;
}

/*  Terminal Output:
    [niSaRuL@fedora Chapter 4 - Sorting Algorithm]$ ./a.out
    1
    3
    5
    7
    8
    9
*/
