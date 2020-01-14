/* 도전4. 두 개의 주사위를 던졌을 때 결과 출력. (단, 결과는 예측불가할 것) */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void) {
    int i, t;

    srand((int)time(NULL));

    for (i=0; i<2;) {
        t = rand();
        if (0<t && t<=6) {
            printf("주사위 %d의 결과 %d\n", i + 1, t);
            i++;
        }
    }
    return 0;
}