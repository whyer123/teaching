#include <stdio.h>

//寫程式盡量保持main簡潔 複雜的功能拉到外面的函式去實作

double factorial(int n); // 計算 n! 階乘
double compute_e(int n); // 使用泰勒展開計算 e

int main() {
    int n;

    // 讀取輸入
    printf("請輸入 n: ");
    scanf("%d", &n);

    // 計算 e
    printf("計算到第 %d 項時，e ≈ %.15f\n", n, compute_e(n));

    return 0;
}

double factorial(int n) {
    double result = 1.0;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

double compute_e(int n) {
    double e_approx = 0.0;
    for (int k = 0; k <= n; k++) {
        e_approx += 1.0 / factorial(k);  // 計算 1/k!
    }
    return e_approx;
}