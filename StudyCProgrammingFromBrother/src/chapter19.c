#include <stdio.h>

void ShowAllString (int argc, char*argv[]) {
    int i;
    for(i=0; i<argc; i++)
        printf("%s\n", argv[i]);
}

int main (void) {
    char*str[3]={
            "C Programming",
            "C++ Programming",
            "JAVA Programmin"
    };
    ShowAllString(3, str);
    return 0;
}