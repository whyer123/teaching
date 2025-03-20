#include <stdio.h>

int sum_of_digits( int n ) {
    int ans = 0;
    while( n>0 ) {
        ans += n%10;
        n/=10;
    }
    return ans;
}

int main() {

    int n;
    scanf("%d", &n);

    printf("%d\n", sum_of_digits(n));

    return 0;
}