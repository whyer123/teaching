#include <stdio.h>

int main() {

    int n,x;
    printf("輸入n,x\n");
    scanf("%d %d", &n, &x);

    double ans=1.0;
    int times=1;
    for( int i=1 ; i<n ; i++ ) {
        times*=i;
        ans += 1.0/times;
    }
    printf("ans:%lf\n", ans);

    return 0;
}