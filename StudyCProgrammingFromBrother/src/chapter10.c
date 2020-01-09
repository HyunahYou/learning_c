#include <stdio.h>

int cal (int, int, int, int);

int main (void) {
    int k1, k2, k3;
    printf("현재 당신이 소유하고 있는 금액: 3500원\n");
    cal(k1, k2, k3,0);
    printf("어떻게 구입하시겠습니까?");
    return 0;
}

int cal (int c1, int c2, int c3, int s) {
    s=3500;
    for (c1=1; c1<s/700; c1++)
        for (c2=1; c2<s/500; c2++)
            for (c3=1; c3<s/400; c3++) {
                if (c1*700+c2*500+c3*400==s) {
                    printf("크림빵 %d개, 새우깡 %d개, 콜 라 %d개\n", c2, c1, c3);
                    continue;
                }

            }
}