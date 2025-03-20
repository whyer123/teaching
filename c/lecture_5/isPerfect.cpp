#include <stdio.h>

bool isPerfect( int n ) {

    int check = 0;
    for( int i=1 ; i<n ; i++ ) {
        if( n%i == 0 ) check+=i;
    }

    if( check == n ) return true;
    return false;

}

int main() {

    for( int i=1 ; i<1000 ; i++ ) {
        if( isPerfect(i) ) printf("%d\n", i);
    }

    return 0;
}