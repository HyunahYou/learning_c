#include <stdio.h>

int main(void) {
    int num1, num2;
    int total=0;

    printf("두 개의 정수 입력: ");
    scanf("%d, %d", &num1, &num2);
    for (total=0; num1<=num2; num1++) {
        total+=num1;
    }
    printf("총합: %d\n", total);
    return 0;
}