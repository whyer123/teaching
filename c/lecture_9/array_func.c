#include <stdio.h>

int count_array_sum( int array[] , int size ) {

    int ans=0;

    for( int i=0 ; i<size ; i++ ) {
        ans += array[i];
    }

    return ans;
}

int main() {

    int arr1[] = {1,2,3};
    int arr2[] = {5,5,5,5,5};

    int sum1 = count_array_sum( arr1 , 3 );
    int sum2 = count_array_sum( arr2 , 5 );

    printf("arr1 sum:%d, arr2 sum:%d\n", sum1, sum2);

    return 0;
}