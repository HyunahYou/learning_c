#include <stdio.h>

int MCompare(int n1, int n2);
int mCompare(int n1, int n2);
int Max(int num1, int num2, int num3);
int mini(int num1, int num2, int num3);

int main(void) {
    int num1, num2, num3;
    printf("세 개의 정수 입력: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("%d, %d, %d중 가장 큰 수: %d \n", num1, num2, num3, Max(num1, num2, num3));
    printf("%d, %d, %d중 가장 작은 수: %d \n", num1, num2, num3, mini(num1, num2, num3));
    return 0;
}

int MCompare (int n1, int n2) {
    if (n1>n2)
        return n1;
    else return n2;
}

int mCompare (int n1, int n2) {
    if (n1<n2)
        return n1;
    else return n2;
}

int Max (int num1, int num2, int num3) {
    if (MCompare(num1, num2) > MCompare(num2, num3))
        return MCompare(num1, num2);
    else return MCompare(num2, num3);
}

int mini (int num1, int num2, int num3) {
    if (mCompare(num1, num2) < mCompare(num2, num3))
        return mCompare(num1, num2);
    else return mCompare(num2, num3);
}