//
// Created by HYUN on 2019-12-24.
//

#ifndef STUDYCPROGRAMMINGFROMBROTHER_PRINTNUMS_H
#define STUDYCPROGRAMMINGFROMBROTHER_PRINTNUMS_H
#include <stdio.h>

#endif //STUDYCPROGRAMMINGFROMBROTHER_PRINTNUMS_H


void printNum(int num1, int num2, int num3, int num4){
    printf("0xA7의 10진수 정수 값: %d\n", num1);
    printf("0x43의 10진수 정수 값: %d\n", num2);
    printf(" 032의 10진수 정수 값: %d\n", num3);
    printf(" 024의 10진수 정수 값: %d\n", num4);
    printf("%d-%d=%d\n", num1, num2, num1 - num2);
    printf("%d+%d=%d\n", num3, num4, num3 + num4);
}