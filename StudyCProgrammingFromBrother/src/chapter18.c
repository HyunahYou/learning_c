#include <stdio.h>

/* Q1. 아래에서 보이는 main 함수에서 ???를 대신할 수 있는 포인터 변수를 선언해보자.
int main (void) {
    int*arr1[5];
    int*arr2[3][5];

    //??? = arr1;
    int **ptr1=arr1;
    //??? = arr2;
    int *(*ptr2)[5]=arr2;
    //......
    return 0;
} */

/* Q2. 아래의 코드를 참조하여 ???를 대신할 수 있는 매개변수 선언을 추가해보자.
void SimpleFuncOne (???, ???) {......}
                   (int*arr1, int*arr2)
void SimpleFuncTwo (???, ???) {......}
                   (int (*arr3)[4], int (*arr4)[4])
int main (void) {
    int arr1[3];
    int arr2[4];
    int arr3[3][4];
    int arr4[2][4];

    SimpleFuncOne (arr1, arr2);
    SimpleFuncTwo (arr3, arr4);
    ......
} */

/* Q3. ???를 대신할 수 있는 매개변수 선언을 추가하자.
void ComplexFuncOne (???, ???) {......}
                    (int**ptr1, int*(*ptr2)[5])
void ComplexFuncTwo (???, ???) {......}
                    (int***ptr3, int***(*ptr4)[5])
int main (void) {
    int*arr1[3];
    int*arr2[3][5];
    int**arr3[5];
    int***arr4[3][5];

    ComplexFuncOne (arr1, arr2);
    ComplexFuncTwo (arr3, arr4);
    ......
} */

/* Q4. 출력 결과는? */
int main (void) {
    int arr[3][2]={ {1, 2}, {3, 4}, {5, 6} };
    printf("%d %d\n", arr[1][0], arr[0][1]);        //->  3 2
    printf("%d %d\n", *(arr[2]+1), *(arr[1]+1));    //->  6 4
    printf("%d %d\n", (*(arr+2))[0], (*(arr+0))[1]);//->  5 2
    printf("%d %d\n", **arr, *(*(arr+0)+0));        //->  1 1
    return 0;
}

/* Q5. 아래의 코드를 보자. 이 예제에서는 인덱스 [1][0][1]의 배열요소를 출력하고 있다.
       이 때 사용된 arr[1][0][1]을 대신할 수 있는 문장을 5개 이상 제시해보자.
int main (void) {
    int arr[2][2][2]={1, 2, 3, 4, 5, 6, 7, 8};
    printf("%d\n", arr[1][0][1]); 1. (*(arr+1))[0][1]
                                  2. (*(arr[1]+0))[1]
                                  3. (*(*(arr+1)+0))[1]
                                  4. *(*(*(arr+1)+0)+1)
                                  5. *(*(arr[1]+0)+1)
                                  6. *(arr[1][0]+1)
    return 0;
} */