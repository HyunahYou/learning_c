#include <stdio.h>

int main(void) {
    int num;
    int total=0;

    while (num!=0) {
        printf("정수 입력: ");
        scanf("%d", &num);
        total+=num;
    }
    printf("정수의 총합: %d\n", total);
    return 0;
}