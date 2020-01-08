#include <stdio.h>

int main(void) {
    int cur=0, total=0;
    int num;
    num>=1;

    while (cur<5) {
        printf("정수 입력: ");
        scanf("%d", &num);
        while (num<1) {
            printf("정수 재입력: ");
            scanf("%d", &num);
        }
        total += num;
        cur++;
    }

    printf("정수의 총합: %d\n", total);
    return 0;
}