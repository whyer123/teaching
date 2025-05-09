#include <stdio.h>
#include <string.h>

char *c;

int main() {

    char str[] = "apple,banana,orange";
    char *token;

    // 使用逗號作為分隔符
    token = strtok(str, ","); 

    while (token != NULL) {
        printf("%s", token);
        token = strtok(NULL, ",");  // 傳入NULL表示繼續從同一個字串中切
    }

    return 0;
}