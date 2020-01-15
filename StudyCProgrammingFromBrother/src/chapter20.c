/* 도전6. 야구게임 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void) {
    int i=0, strike = 0, ball = 0;
    int t[3], k[3];

    printf("Start Game!\n");

    srand((int) time(NULL));

    for (i = 0; i < 3;) {
        if (0 <= t[i] && t[i] < 10) {
            t[i] = rand();
            i++;
        } else continue;
    }

    for (i=0; i<20;) {
        strike=0;
        ball=0;
        printf("%d번째 도전\n", i+1);
        for (int l=0; l<3; l++) {
            printf("3개의 숫자 중 %d번째 숫자 선택: ", l+1);
            scanf("%d", &k[l]);
        }

        if (t[0]==k[0] && t[0]==k[1] && t[0]==k[2])
            if (t[0]==k[0])
                strike++;
            else ball++;
        if (t[1]==k[0] && t[1]==k[1] && t[1]==k[2])
            if (t[1]==k[1])
                strike++;
            else ball++;
        if (t[2]==k[0] && t[2]==k[1] && t[2]==k[2])
            if (t[2]==k[2])
                strike++;
            else ball++;

        printf("%d번째 도전 결과: %d strike, %d ball!\n", i+1, strike, ball);
        i++;

        if (strike==3) {
            printf("Game Over!");
            break;
        }
    }
    return 0;
}