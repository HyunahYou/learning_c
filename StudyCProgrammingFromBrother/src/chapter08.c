#include <stdio.h>

int main(void) {
    int A, Z;

    for (A=0; A<10; A++) {
        for (Z=0; Z<10; Z++)
            if (Z!=9-A)
                continue;
            else break;
            printf("%d%d+%d%d=%d\n", A, Z, Z, A, 99);
    }
    return 0;
}