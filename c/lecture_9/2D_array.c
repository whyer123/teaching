#include <stdio.h>

int count_array_sum( int array[][2] , int size ) {

    int ans=0;

    for( int i=0 ; i<size ; i++ ) {
        for( int j=0 ; j<2 ; j++ ) {
            ans += array[i][j];
        }
    }

    return ans;
}

int main() {

    int arr[3][2] = { {0,1},
                      {2,3},
                      {4,5} };

    int sum = count_array_sum( arr , 3 );

    printf("arr sum: %d\n", sum);

    return 0;
}