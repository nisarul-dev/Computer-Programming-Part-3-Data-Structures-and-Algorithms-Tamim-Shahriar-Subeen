// N.B. in the case of Binary Search, the array should be sorted.
#include <stdio.h>

int binary_search( int A[], int n, int x ) {
    int first = 0, last = n - 1, mid;

    while ( first <= last ) {
        mid = (first + last) / 2;

        if ( A[mid] == x ) {
            return mid;
        } else if ( A[mid] < x ) {
            first = mid + 1;
        } else if ( A[mid] > x ) {
            last = mid - 1;
        }
    }
    return -1;
}

char *ordinal_num_sign( int n ) {
    if( (n-1) % 10 == 0 && n != 11) {
        return "st";
    } else if ( (n-2) % 10 == 0 && n != 12 ) {
        return "nd";
    } else if ( (n-3) % 10 == 0 && n != 13 ) {
        return "rd";
    } else {
        return "th";
    }
}

int main() {

    int nums[] = { 2, 5, 7, 8, 10 }, n = 5, x;
    scanf( "%d", &x );

    int index = binary_search( nums, n, x );

    if ( index == -1 ) {
        printf( "Couldn't find '%d' in the array.\n", x );
    } else {
        printf("'%d' is the %d%s item of the array.\n", x, index+1, ordinal_num_sign( index+1 ) );
    }

    return 0;
}

/*  [niSaRuL@fedora Chapter 3 - Searching Algorithm]$ ./a.out
    10
    '10' is the 5th item of the array.


    [niSaRuL@fedora Chapter 3 - Searching Algorithm]$ ./a.out
    15
    Couldn't find '15' in the array.
*/
