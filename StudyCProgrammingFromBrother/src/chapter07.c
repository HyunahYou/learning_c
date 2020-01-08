#include <stdio.h>

int main(void) {
    int total=0, num=1;
    do {
        total+=num*2;
        num++;
    } while (num<=50);
    printf("0~100 중 짝수의 합계: %d\n", total);
    return 0;
}