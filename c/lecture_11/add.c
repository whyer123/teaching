#include <stdio.h>

int main() {

    int a=0;
    int b=0;

    printf("Enter two number:\n");
    scanf("%d %d", &a, &b); // 可以不用手動輸入 而是利用 < input.txt 
    printf("%d\n", a+b);

    return 0;
}