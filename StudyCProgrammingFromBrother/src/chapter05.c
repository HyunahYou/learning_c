#include "stdio.h"

int main(void) {
    char asc;

    printf("하나의 알파벳 입력: ");
    scanf("%c", &asc);

    printf("해당 알파벳의 아스키 코드 값: %d\n", asc);
    return 0;
}