#include <stdio.h>

int main(void) {
    int kor, eng, mat;
    double ave;

    printf("국어, 영어, 수학 점수 입력: ");
    scanf("%d, %d, %d", &kor, &eng, &mat);
    ave=(kor+eng+mat)/3.0;

    if (ave>=90.0)
        printf("A\n");
    else if (ave>=80.0)
        printf("B\n");
    else if (ave>=70.0)
        printf("C\n");
    else if (ave>=50.0)
        printf("D\n");
    else printf("F\n");
    return 0;
}