#include <stdio.h>

int main (void) {
    int num;
    printf("정수 입력: ");
    scanf("%d", &num);
    printf("%d의 16진수 값: %X\n", num, num);
    return 0;
}