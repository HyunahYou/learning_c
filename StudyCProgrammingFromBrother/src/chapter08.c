#include <stdio.h>

int main(void) {
    int cur, is;
    for (cur=2; cur<10; cur++) {
        if (cur%2!=0)
            continue;
        for (is=1; is<10; is++) {
            printf("%d*%d=%d\n", cur, is, cur*is);
            if (cur<is+1)
                break;
        }
        printf("\n");
    }
    return 0;
}