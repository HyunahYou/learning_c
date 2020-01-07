#include "stdio.h"

int main(void) {
    double num1, num2;

    printf("두 개의 실수: ");
    scanf("%lf, %lf", &num1, &num2);

    printf("두 실수의 합: %f\n", num1+num2);
    printf("두 실수의 차: %f\n", num1-num2);
    printf("두 실수의 곱: %f\n", num1*num2);
    printf("두 실수의 나눗셈: %f\n", num1/num2);
    return 0;
}