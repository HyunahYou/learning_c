/* 도전5. 가위바위보 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void) {
    int num, t;
    int win=0, tie=0;

    printf("바위는 1, 가위는 2, 보는 3: ");
    scanf("%d", &num);
    srand((int)time(NULL));
    for (int i=0; i<10;) {
        t = rand();
        if (t > 0 && t < 4) {
            if (num == 1) {
                if (t == 1) {
                    printf("당신은 바위 선택, 컴퓨터는 바위 선택, 비겼습니다!\n");
                    tie++;
                    i++;
                    printf("바위는 1, 가위는 2, 보는 3: ");
                    scanf("%d", &num);
                } else if (t == 2) {
                    printf("당신은 바위 선택, 컴퓨터는 가위 선택, 이겼습니다!\n");
                    win++;
                    i++;
                    printf("바위는 1, 가위는 2, 보는 3: ");
                    scanf("%d", &num);
                } else if (t == 3) {
                    printf("당신은 바위 선택, 컴퓨터는 보 선택, 졌습니다!\n");
                    break;
                }
            } else if (num == 2) {
                if (t == 1) {
                    printf("당신은 가위 선택, 컴퓨터는 바위 선택, 졌습니다!\n");
                    break;
                } else if (t == 2) {
                    printf("당신은 가위 선택, 컴퓨터는 가위 선택, 비겼습니다!\n");
                    tie++;
                    i++;
                    printf("바위는 1, 가위는 2, 보는 3: ");
                    scanf("%d", &num);
                } else if (t == 3) {
                    printf("당신은 가위 선택, 컴퓨터는 보 선택, 이겼습니다!\n");
                    win++;
                    i++;
                    printf("바위는 1, 가위는 2, 보는 3: ");
                    scanf("%d", &num);
                }
            } else if (num == 3) {
                if (t == 1) {
                    printf("당신은 보 선택, 컴퓨터는 바위 선택, 이겼습니다!\n");
                    win++;
                    i++;
                    printf("바위는 1, 가위는 2, 보는 3: ");
                    scanf("%d", &num);
                } else if (t == 2) {
                    printf("당신은 보 선택, 컴퓨터는 가위 선택, 졌습니다!\n");
                    break;
                } else if (t == 3) {
                    printf("당신은 보 선택, 컴퓨터는 보 선택, 비겼습니다!\n");
                    tie++;
                    i++;
                    printf("바위는 1, 가위는 2, 보는 3: ");
                    scanf("%d", &num);
                }
            }
        }
        else continue;
    }
    printf("\n게임의 결과: %d승, %d무\n", win, tie);
    return 0;
}