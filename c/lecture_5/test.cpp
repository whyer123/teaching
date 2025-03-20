#include <stdio.h>
#include <math.h>

int main() {
    double n;
    
    // 讀取輸入
    printf("Please enter a number: ");
    scanf("%lf", &n);

    // 四捨五入到小數點後兩位
    n = round(n * 100) / 100;

    // 從 0.01 開始，每次加 0.01，直到 n
    for (double i = 0.01; i <= n+0.02; i += 0.01) {
        printf("%.30f\n", i);
    }

    return 0;
}