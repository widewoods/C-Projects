#include <stdio.h>

int main(){
    int num1 = 0;
    int size;

    size = sizeof num1;    // 변수 num1의 자료형 크기를 구함

    printf("num1's size: %d\n", size);

    size = sizeof(int);

    printf("int size: %d\n", size);

    return 0;
}