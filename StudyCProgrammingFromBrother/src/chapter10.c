#include <stdio.h>

int main (void) {
    int num;
    int h=0, m=0, s=0;

    printf("초 입력: ");
    scanf("%d", &num);

    h=num/3600;
    m=(num-h*3600)/60;
    s=num-(h*3600)-(m*60);

    printf("h: %d, m: %d, s: %d\n", h, m, s);
    return 0;
}