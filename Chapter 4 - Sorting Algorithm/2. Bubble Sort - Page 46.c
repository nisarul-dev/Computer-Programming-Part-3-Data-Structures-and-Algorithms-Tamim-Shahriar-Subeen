#include <stdio.h>

void selection_sort( int A[], int n ) {
    int i, j, k, temp;
    for ( i = 0; i < n; i++) {
        for ( j = 0, k = 1; k < (n-i); j++, k++) {
            if( A[j] > A[k]) {
                temp = A[j];
                A[j] = A[k];
                A[k] = temp;
            }
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

/*  Terminal Output:
    [niSaRuL@fedora Chapter 4 - Sorting Algorithm]$ ./a.out
    2
    5
    7
    8
    10
*/
