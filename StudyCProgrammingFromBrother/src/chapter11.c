#include <stdio.h>

int main (void) {
    char word[50];
    int len=0;
    int i;
    char max=0;

    printf("영단어 입력: ");
    scanf("%s", word);

    for (; word[len]!='\0'; len++);
    printf("아스키 코드 값이 가장 큰 문자: ");
    for (i=0; i<len; i++) {
        if (max<word[i])
            max=word[i];
    }
    printf("%c", max);

    return 0;
}