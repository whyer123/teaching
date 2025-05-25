#include <stdio.h>
#include <stdlib.h>

struct Personal {
    char name[15];
    int bornYear;
    char phoneNumber[11];
    char address[20];
};

// Text mode：寫入
void writeToFileText(struct Personal* arr, int n, const char* filename) {
    FILE* fp = fopen(filename, "w");
    for (int i = 0; i < n; i++) {
        fprintf(fp, "%s %d %s %s\n",
            arr[i].name, arr[i].bornYear,
            arr[i].phoneNumber, arr[i].address);
    }
    fclose(fp);
}

// Text mode：讀取
void readFromFileText(struct Personal* arr, int n, const char* filename) {
    FILE* fp = fopen(filename, "r");
    for (int i = 0; i < n; i++) {
        fscanf(fp, "%s %d %s %s",
            arr[i].name, &arr[i].bornYear,
            arr[i].phoneNumber, arr[i].address);
    }
    fclose(fp);
}

// Binary mode：寫入
void writeToFileBinary(struct Personal* arr, int n, const char* filename) {
    FILE* fp = fopen(filename, "wb");
    fwrite(arr, sizeof(struct Personal), n, fp);
    fclose(fp);
}

// Binary mode：讀取
void readFromFileBinary(struct Personal* arr, int n, const char* filename) {
    FILE* fp = fopen(filename, "rb");
    fread(arr, sizeof(struct Personal), n, fp);
    fclose(fp);
}

int main() {
    int n;
    printf("請輸入通訊錄人數: ");
    scanf("%d", &n);

    // 仍用 C++ 的 new 配置記憶體
    struct Personal* people = new Personal[n];

    // 輸入資料
    for (int i = 0; i < n; i++) {
        printf("輸入第 %d 筆資料:\n", i + 1);
        printf("姓名: ");
        scanf("%s", people[i].name);
        printf("出生年: ");
        scanf("%d", &people[i].bornYear);
        printf("電話: ");
        scanf("%s", people[i].phoneNumber);
        printf("地址: ");
        scanf("%s", people[i].address);
    }

    // 寫入與讀出
    writeToFileText(people, n, "contacts.txt");
    readFromFileText(people, n, "contacts.txt");

    writeToFileBinary(people, n, "contacts.dat");
    readFromFileBinary(people, n, "contacts.dat");

    // 釋放記憶體（使用 delete[] 因為是 new 配置）
    delete[] people;

    return 0;
}