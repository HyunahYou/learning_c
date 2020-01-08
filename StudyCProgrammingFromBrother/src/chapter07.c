#include <stdio.h>

int main(void) {
    int k=0, num=0;

    while (k<5) {
        while (num<k) {
            printf("o ");
            num++;
        }
        num=0;
        printf("*\n");
        k++;
    }
    return 0;
}