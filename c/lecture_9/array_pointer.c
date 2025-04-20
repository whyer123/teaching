#include <stdio.h>

int main() {

    int arr[] = {1,2,3};

    printf("arr address:%p\n", arr);

    printf("arr[0]:%d\narr[1]:%d\narr[2]:%d\n", arr[0], arr[1], arr[2]);
    printf("-----------------------------------------------\n");
    printf("arr[0]:%d\narr[1]:%d\narr[2]:%d\n", *(arr + 0), *(arr + 1), *(arr + 2));

    return 0;
}