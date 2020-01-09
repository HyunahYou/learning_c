#include <stdio.h>

int tn (int n) {
    if (n==0)
        return 1;
    else return 2*tn(n-1);
}
int main (void) {
    int n;

    printf("구하려는 2의 n제곱의 n 입력: ");
    scanf("%d", &n);
    printf("2의 %d제곱: %d\n", n, tn(n));

    return 0;
}