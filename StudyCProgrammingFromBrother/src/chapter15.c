#include <stdio.h>

int main (void) {
    int len=0, cnt=0;
    char word[50];

    printf("문자열 입력: ");
    scanf("%s", word);

    while (word[len] != '\0')
        len++;
    for (int i=0; i<len/2; i++) {
        if (word[i] == word[len-i-1])
            cnt++;
    }
    if (cnt==len/2)
        printf("회문입니다.\n");
    else printf("회문이 아닙니다.\n");

    return 0;
}