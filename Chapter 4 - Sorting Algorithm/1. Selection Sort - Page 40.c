#include <stdio.h>

void selection_sort( int A[], int n ) {
    int index_min, i, j, temp;

    for ( i = 0; i < n; i++ ) {
        index_min = i;
        for ( j = 1 + i; j < n; j++ ) {
            if ( A[index_min] > A[j] ) {
                index_min = j;
            }
        }

        if ( index_min != i ) {
            temp = A[i];
            A[i] = A[index_min];
            A[index_min] = temp;
        }
    }
}

int main() {

    int nums[] = { 5, 10, 2, 8, 7};
    int n = 5;

    selection_sort( nums, n );

    for (int i = 0; i < n; i++) {
        printf("%d\n", nums[i]);
    }

    return 0;
}

/*
    [niSaRuL@fedora Chapter 4 - Sorting Algorithm]$ ./a.out
    2
    5
    7
    8
    10
*/
