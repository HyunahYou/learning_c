#include <stdio.h>

int main(void) {
    double d1=1.23e-3; //0.00123
    double d2=1.23e-4; //0.000123
    double d3=1.23e-5; //0.0000123
    double d4=1.23e-6; //0.00000123

    printf("%g\n", d1); //%f 스타일 출력
    printf("%g\n", d2); //%f 스타일 출력
    printf("%g\n", d3); //%e 스타일 출력
    printf("%g\n", d4); //%e 스타일 출력
    return 0;
}