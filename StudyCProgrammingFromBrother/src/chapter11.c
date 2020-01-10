#include <stdio.h>

int main (void) {
    char arr[]={"Good time"};
    int arLen;

    arLen= sizeof(arr)/sizeof(char);

    for (int i=0; i<arLen; i++)
        printf("%c", arr[i]);
    printf("\n");
    return 0;
}