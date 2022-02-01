#include <stdio.h>

void selection_sort( int A[], int n ) {
    int i, j, k, temp;
    for ( i = 0; i < n; i++ ) {
        for ( j = 0; j < n-i-1; j++ ) {
            if( A[j] > A[j+1] ) {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}


int main() {

    int nums[] = { 5, 10, 2, 8, 7 };
    int n = 5;

    selection_sort( nums, n );

    for (int i = 0; i < n; i++) {
        printf("%d\n", nums[i]);
    }

    return 0;
}

/*  Terminal Output:
    [niSaRuL@fedora Chapter 4 - Sorting Algorithm]$ ./a.out
    2
    5
    7
    8
    10
*/
