#include <stdio.h>

int main(void) {
    int cur=0, total=0, num=0;

    while (cur<5) {
        while (num<=0) {
            printf("0보다 큰 수를 입력(%d번째): ", cur+1);
            scanf("%d", &num);
        }
        total += num;
        num=0;
        cur++;
    }
    printf("총합: %d\n", total);
    return 0;
}