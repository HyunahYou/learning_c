#include <stdio.h>

int main (void) {
    char word[50];
    int idx=0, len=0;

    printf("영단어 입력: ");
    scanf("%s", word);

    for (len=0; word[idx]!='\0'; idx++)
        len=idx;
    printf("역순: ");
    for (idx=len; idx>=0; idx--)
        printf("%c", word[idx]);

    return 0;
}