#include <stdio.h>

struct Student {
    int english;
    int program;
    int math;
    float average;
};

void computeAverage(Student* s, int count) {
    for (int i = 0; i < count; ++i) {
        s[i].average = (s[i].english + s[i].program + s[i].math) / 3.0f;
    }
}

int main() {
    int n;
    printf("輸入學生人數: ");
    scanf("%d", &n);

    Student* students = new Student[n];  // 配置動態記憶體

    for (int i = 0; i < n; ++i) {
        printf("輸入第 %d 位學生的成績:\n", i + 1);
        printf("English: ");
        scanf("%d", &students[i].english);
        printf("Program: ");
        scanf("%d", &students[i].program);
        printf("Math: ");
        scanf("%d", &students[i].math);
    }

    computeAverage(students, n);  // 計算平均

    printf("\n所有學生的成績與平均:\n");
    for (int i = 0; i < n; ++i) {
        printf("第 %d 位學生: Eng=%d, Pro=%d, Math=%d, Avg=%.2f\n",
               i + 1,
               students[i].english,
               students[i].program,
               students[i].math,
               students[i].average);
    }

    delete[] students;  // 釋放記憶體

    return 0;
}