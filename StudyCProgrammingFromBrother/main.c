#include "printNums.h"

int main(void) {
    int num1 = 0xA7, num2 = 0x43;
    int num3 = 032, num4 = 024;
    char carr[15] = "cats\0test";
    char *cptr = "dogs";
//    printf("%s\n", carr);
//    printf("%p\n", cptr);
//    printf("%s\n", cptr);

    printNum(num1,num2,num3,num4);


    return 0;
}