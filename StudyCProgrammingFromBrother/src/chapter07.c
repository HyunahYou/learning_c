#include <stdio.h>

int main(void) {
    int num1, num2=0, num3, total=0;
    printf("입력할 정수의 갯수: ");
    scanf("%d", &num1);

    while (num2<num1) {
        printf("정수 입력: ");
        scanf("%d", &num3);
        total+=num3;
        num2++;
    }
    printf("정수의 평균: %f\n", (double)total/num1); //★ %f ★
    return 0;
}