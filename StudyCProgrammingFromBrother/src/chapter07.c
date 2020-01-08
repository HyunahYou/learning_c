#include <stdio.h>

int main(void) {
    int n=0;
    int m;

    printf("정수 입력: ");
    scanf("%d", &n);
    for (m=1; n>=1; n--) {
        m*=n;
    }
    printf("계승 결과: %d\n", m);
    return 0;
}