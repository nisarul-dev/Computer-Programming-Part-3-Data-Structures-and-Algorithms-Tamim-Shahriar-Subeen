#include <stdio.h>

int linear_search(int A[], int n, int x) {
    int i;
    for ( i = 0; i < n; i++ ) {
        if ( A[i] == x ) {
            return i; // Found the item at the index i
        }
    }

    i = -1; // Couldn't find the item in array
    return i;
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

    int nums[] = { 5, 10, 2, 8, 7}, n = 5, x;
    scanf( "%d", &x );

    int index = linear_search( nums, n, x );

    if ( index == -1) {
        printf( "Couldn't find '%d' in the array.\n", x );
    } else {
        printf("'%d' is the %d%s item of the array.\n", x, index+1, ordinal_num_sign( index+1 ) );
    }

    return 0;
}

/*  [niSaRuL@fedora Chapter 3 - Searching Algorithm]$ ./a.out
    10
    '10' is the 2nd item of the array.


    [niSaRuL@fedora Chapter 3 - Searching Algorithm]$ ./a.out
    15
    Couldn't find '15' in the array.
*/
