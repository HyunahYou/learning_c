#include <stdio.h>

int main (void) {
    int num;
    int arr[10];
    int s=0, e=9;

    printf("총 10개의 숫자 입력\n");
    for (int k=0; k<10; k++) {
        printf("입력: ");
        scanf("%d", &num);

        if (num%2 != 0) {
            arr[s] = num;
            s++;
        }
        else {
            arr[e] = num;
            e--;
        }
    }

    printf("배열 요소의 출력: ");
    for (int n=0; n<10; n++) {
     printf("%d ", arr[n]);
    }
    printf("\n");
    return 0;
}