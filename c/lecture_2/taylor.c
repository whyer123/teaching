#include <stdio.h>
#include <math.h>

int main() {
    int n, x;
    while(1) {
        printf("Enter a nonnegative integer n\n");
        scanf("%d", &n);

        printf("Enter a nonnegative integer x\n");
        scanf("%d", &x);

        int c = 1;
        float e = 1.0;
        int cf = 1;
        int y = 1;

        while (c <= n) {
            cf = cf * c;
            e = e + pow(x, y) / cf;
            c = c + 1;
            y = y + 1;
        }

        printf("%f\n", e);
    }
}