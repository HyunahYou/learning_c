#include <stdio.h>

int GCD (int g1, int g2);

int main (void) {
    int num1, num2;
    printf("두 정수 입력: ");
    scanf("%d, %d", &num1, &num2);
    printf("두 수의 최대공약수: %d\n", GCD(num1, num2));
    return 0;
}

int GCD (int g1, int g2) {
    int gcd,GCD;

    if (g1>g2) {
        for (gcd=1; gcd<=g2; gcd++) {
            if (g1%gcd==0 && g2%gcd==0)
                GCD=gcd;
        }
    } else for (gcd=1; gcd<=g1; gcd++) {
            if (g1%gcd==0 && g2%gcd==0)
                GCD=gcd;
        }
    return GCD;
}