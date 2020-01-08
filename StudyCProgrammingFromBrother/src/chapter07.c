#include <stdio.h>

int main(void) {
    int num1=1;
    int num2;
    printf("배수의 갯수: ");
    scanf("%d", &num2);

    while (num1<num2+1) {
        printf("%d ", 3*num1);
        num1++;
    }
    return 0;
}