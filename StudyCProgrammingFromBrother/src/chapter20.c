/* 도전3. 주어진 예제를 변경해 0이상 99이하의 난수를 총 5개 생성하는 프로그램을 작성해보자. */
#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int i, random;
    printf("난수의 범위: 0부터 99까지\n");

    for (i = 0; i < 5;) {
        random=rand();
        if (random<=99) {
            printf("난수 출력: %d\n", random);
            i++;
        }
    }
    return 0;
}