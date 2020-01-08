#include <stdio.h>

int main(void) {
    int cur = 2, is = 0;
    do {
        is = 1;
        do {
            printf("%d*%d=%d\n", cur, is, cur * is);
            is++;
        } while (is < 10);
        cur++;
    } while (cur < 10);
    return 0;
}