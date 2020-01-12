#include <stdio.h>

int main (void) {
    int i, num;
    int cnt=0;
    int arr[100];

    printf("입력: ");
    scanf("%d", &num);

    for (i=0; i<100; i++) {
        if (num!=0) {
            arr[i]=num%2;
            num=num/2;
            cnt++;
        } else break;
    }
    for (i=cnt; i>0; i--) {
        printf("%d", arr[i-1]);
    }
    printf("\n");
    return 0;
}