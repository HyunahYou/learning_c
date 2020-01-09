#include <stdio.h>

int main (void) {
    int num, k;
    int cnt=0;
    printf("10개의 소수: ");
    for (num=2; cnt<10; num++) {
        for (k=1; k<num; k++) {
            if (num%k==0 && k!=1) //소수가 아닌 경우
                break;
            if (k==num-1) { //소수인 경우
                printf("%d ", num);
                cnt++;
            }
        }
    }
    return 0;
}