#include <stdio.h>

int three_parts(int A[], int size) {

}

int main() {

    int A[] = {0,2,1,-6,6,-7,9,1,2,0,1};
    int size = 11;


    if( three_parts( A , size ) ) {
        printf("成功\n");
    } else {
        printf("失敗\n");
    }


    return 0;
}