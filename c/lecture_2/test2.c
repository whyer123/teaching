#include <stdio.h>

int main() {

    int n=0;
    scanf("%d", &n);

    int i=1;
    double ans=1.0; 
    double fac=1.0; //下面的階乘
    
    while( i<=n ) {
        ans = ans + 1.0/fac;
        //printf("fac:%f\n", fac);
        fac = fac*(i+1);

        i=i+1;
    }
    
    printf("ans%lf\n", ans);

    return 0;
}