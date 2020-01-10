#include <stdio.h>

int main (void) {
    char word[50];
    int idx=0;

    printf("영단어 입력: ");
    scanf("%s", word);
    printf("글자 수: ");
    for (; word[idx]!='\0'; idx++);
    printf("%d", idx);
    return 0;
}