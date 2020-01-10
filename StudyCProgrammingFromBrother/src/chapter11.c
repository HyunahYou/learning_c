#include <stdio.h>

int main (void) {
    int arr[5];
    int sum=0;

    printf("5개의 정수 입력: ");
    scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

    printf("입력된 정수 중 최댓값: ");
    if (arr[0]>arr[1] && arr[0]>arr[2] && arr[0]>arr[3]&& arr[0]>arr[4])
        printf("%d", arr[0]);
    else if (arr[1]>arr[0] && arr[1]>arr[2] && arr[1]>arr[3]&& arr[1]>arr[4])
        printf("%d", arr[1]);
    else if (arr[2]>arr[0] && arr[2]>arr[1] && arr[2]>arr[3]&& arr[2]>arr[4])
        printf("%d", arr[2]);
    else if (arr[3]>arr[0] && arr[3]>arr[1] && arr[3]>arr[2]&& arr[3]>arr[4])
        printf("%d", arr[3]);
    else if (arr[4]>arr[0] && arr[4]>arr[1] && arr[4]>arr[2]&& arr[4]>arr[3])
        printf("%d", arr[4]);
    printf("\n");

    printf("입력된 정수 중 최솟값: ");
    if (arr[0]<arr[1] && arr[0]<arr[2] && arr[0]<arr[3]&& arr[0]<arr[4])
        printf("%d", arr[0]);
    else if (arr[1]<arr[0] && arr[1]<arr[2] && arr[1]<arr[3]&& arr[1]<arr[4])
        printf("%d", arr[1]);
    else if (arr[2]<arr[0] && arr[2]<arr[1] && arr[2]<arr[3]&& arr[2]<arr[4])
        printf("%d", arr[2]);
    else if (arr[3]<arr[0] && arr[3]<arr[1] && arr[3]<arr[2]&& arr[3]<arr[4])
        printf("%d", arr[3]);
    else if (arr[4]<arr[0] && arr[4]<arr[1] && arr[4]<arr[2]&& arr[4]<arr[3])
        printf("%d", arr[4]);
    printf("\n");

    for (int i=0; i<5; i++) {
        sum+=arr[i];
    }
    printf("입력된 정수의 총합: %d\n", sum);

    return 0;
}