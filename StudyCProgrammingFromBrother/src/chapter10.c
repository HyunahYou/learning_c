#include <stdio.h>

int main (void) {
    int n, k;

    printf("입력: ");
    scanf("%d", &n);

    if (n==1)
        printf("k=0");
    else { for (k=0; n>1; k++) {
            n /= 2;
        }
        printf("k=%d\n", k);
    }
    return 0;
}