#include <stdio.h>

int main(void) {
    int num1=0;
    int num2;
    printf("양의 정수 입력: ");
    scanf("%d", &num2);

    while (num1<num2) {
        printf("Hello world!\n");
        num1++;
    }
    return 0;
}