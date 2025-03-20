#include <stdio.h>

int main() {

    int score = 0;

    printf("請輸入成績：");
    scanf("%d", &score);

    if( score > 100 || score < 0 ) {
        printf("你的成績超出範圍。");
    } else if( score = 100 ) {
        printf("太厲害了！\n");
    } else if( score > 60 ) {
        printf("表現還不錯～\n");
    } else {
        printf("要繼續加油...\n");
    }

    return 0;
}
