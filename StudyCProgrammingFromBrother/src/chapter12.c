#include <stdio.h>

int main (void) {
    int num1=10, num2=20;
    int*ptr1=&num1;
    int*ptr2=&num2;

    (*ptr1)+=10;
    (*ptr2)-=10;

    ptr1=&num2;
    ptr2=&num1;

    printf("ptr1이 가르키는 변수에 저장된 값: %d\n", *ptr1);
    printf("ptr2이 가르키는 변수에 저장된 값: %d\n", *ptr2);
    return 0;
}