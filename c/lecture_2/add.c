#include <stdio.h>

int main() {

    printf("輸入兩個整數 我幫你加起來:\n");
    int a=0; //宣告 初始化
    int b=0;
    // int float(double) char bool
    // %d
    scanf("%d", &a); // 讀入整數
    scanf("%d", &b);

    //printf("%d %d", a, b);

    printf("%s%d\n", "answer is:",a+b);//印出答案

    /* printf("答案是：%d\n", a+b);
    也可以這樣寫
    */

    return 0;
}