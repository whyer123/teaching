#include <stdio.h>

int check_array( int a[] , int size ) {

    for( int i=1 ; i<size-2 ; i++ ) {
        for( int j=i+1 ; j<size-1 ; j++ ) {

            int sum1=0;
            int sum2=0;
            int sum3=0;

            for( int k=0 ; k<i ; k++ ) {
                sum1 += a[k];
            }
            for( int k=i ; k<j ; k++ ) {
                sum2 += a[k];
            }
            for( int k=j ; k<size ; k++ ) {
                sum3 += a[k];
            }

            if( sum1 == sum2 && sum2 == sum3 ) {
                // printf("%d\n", sum1); debug
                return 1;
            }
        }
    }
    return 0;
}

int main() {

    int a[] = {3,3,6,5,-2,2,5,1,-9,4};
    if( check_array(a,10) ) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}