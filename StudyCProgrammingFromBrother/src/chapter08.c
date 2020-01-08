#include <stdio.h>

int main(void) {
    int num1, num2, result;

    printf("두 개의 정수 입력: ");
    scanf("%d %d", &num1, &num2);

    result=num1>num2 ? num1-num2 : num2-num1;
    printf("뺄셈 결과: %d", result);
    return 0;
}