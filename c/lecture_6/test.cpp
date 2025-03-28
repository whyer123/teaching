#include <stdio.h>

int print( int n );

int main() {

    int n=0;
    scanf("%d", &n);
    print(n);
    printf("n:%d", n);

    return 0;
}

int print( int n ) {

    int a=n;

    while(a>0) {
        printf("%d\n", a);
        a--;
    }

    //n=0

    return 0;
}