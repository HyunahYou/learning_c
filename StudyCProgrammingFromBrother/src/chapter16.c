#include <stdio.h>

int main (void) {
    int A[2][4]={
            {1, 2, 3, 4},
            {5, 6, 7, 8}
    };
    int B[4][2];
    int i, j;

    for (i=0; i<2; i++) {
        for (j=0; j<4; j++)
            B[j][i]=A[i][j];
    }

    for (i=0; i<4; i++) {
        for (j=0; j<2; j++)
            printf("%2d", B[i][j]);
        printf("\n");
    }
    return 0;
}
