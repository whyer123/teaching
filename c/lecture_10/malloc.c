#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int size;

    printf("請輸入陣列大小：");
    scanf("%d", &size);

    // 使用 malloc 配置記憶體空間
    arr = (int *)malloc(size * sizeof(int));

    // 檢查是否配置成功
    if (arr == NULL) {
        printf("記憶體配置失敗！\n");
        return 1;
    }

    // 填入值（例如填入 index*2）
    for (int i = 0; i < size; i++) {
        arr[i] = i * 2;
    }

    // 印出所有值
    printf("陣列內容：\n");
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // 釋放記憶體
    free(arr);

    return 0;
}