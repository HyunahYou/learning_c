#include <stdio.h>

int odd (int*ptr1) {
    for (int i=0; i<10; i++) {
        if (ptr1[i]%2 != 0)
            printf("%d ", ptr1[i]);
    }
}
int even (int*ptr2) {
    for (int i=0; i<10; i++) {
        if (ptr2[i]%2 == 0)
            printf("%d ", ptr2[i]);
    }
}

int main (void) {
    int arr[10];
    for (int i=0; i<10; i++) {
        printf("입력: ");
        scanf("%d", &arr[i]);
    }
    printf("홀수 출력: ");
    odd(&arr);
    printf("\n");
    printf("짝수 출력: ");
    even(&arr);
    printf("\n");

    return 0;
}