#include <stdio.h>

double CelToFah(double n);

double FahToCel(double n);

int main(void) {
    int opt;
    double num;
    printf("1.섭씨온도 2.화씨온도\n");
    printf("온도의 종류를 번호로 입력 후 온도를 입력: ");
    scanf("%d %lf", &opt, &num);

    switch (opt) {
        case 1:
            printf("섭씨 %lf도, 화씨 %lf도\n", num, CelToFah(num));
            break;
        case 2:
            printf("화씨 %lf도, 섭씨 %lf도\n", num, FahToCel(num));
    }
    return 0;
}

double CelToFah (double n) {
    return 1.8*n+32.0;
}

double FahToCel (double n) {
    return (n-32.0)/1.8;
}