#include <stdio.h>

int main (void) {

    int dan1, dan2, is;

    printf("구구단을 출력할 두 개의 단 입력: ");
    scanf("%d, %d", &dan1, &dan2);

    if (dan1<dan2) {
        for (; dan1<=dan2; dan1++) {
            for (is=1; is<10; is++)
                printf("%d*%d=%d\n", dan1, is, dan1*is);
            printf("\n");
        }
    } else for (; dan2<=dan1; dan2++) {
            for (int is=1; is<10; is++)
                printf("%d*%d=%d\n", dan2, is, dan2*is);
            printf("\n");
        }
    return 0;
}