#include "stdio.h"

int main(void) {
    int num;
    printf("정수 입력: ");
    scanf("%d", &num);
    printf("부호 전환 결과: %d\n", ~num+1);
    return 0;
}