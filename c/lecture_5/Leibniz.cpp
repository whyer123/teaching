#include <stdio.h>
#include <math.h>

double Leibniz( int n ) {

    double ans = 0.0;
    int base = 1;
    int sign = 1;

    for( int i=0 ; i<n ; i++ ) {
        ans += (double)sign*4/(2*base-1);
        base += 1;
        sign *= -1;
    }

    return ans;
}

int main() {

    int n=-1;

    while (1) {
        scanf("%d", &n);
        if( n<1 ) break;

        printf("ans: %.2lf\n", Leibniz(n));

    }

    return 0;
}