#include <stdio.h>

int AddToTotal (int num) {
    static int total=0;
    total+=num;
    return total;
}
int main (void) {
    int num, i;
    for (i=0; i<3; i++) {
        printf("입력%d: ", i+1);
        scanf("%d", &num);
        printf("누적: %d\n", AddToTotal(num));
    }
    return 0;
}