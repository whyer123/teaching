#include <stdio.h>

int main() {
    int n;
    printf("請輸入陣列大小: ");
    scanf("%d", &n);

    // 使用 new 配置一個整數陣列
    int* arr = new int[n];

    // 輸入資料
    for (int i = 0; i < n; ++i) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // 輸出資料
    printf("你輸入的陣列內容是:\n");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 釋放記憶體
    delete[] arr;

    return 0;
}