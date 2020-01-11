#include <stdio.h>

int main (void) {
    int arr[6]={1, 2, 3, 4, 5, 6};
    int *ptr1=&arr[0];
    int *ptr2=&arr[5];
    int temp;
    for (int i=0; i<3; i++) {
        temp=*ptr1;
        *ptr1=*ptr2;
        *ptr2=temp;
        ptr1+=1;
        ptr2-=1;
    }
    for (int i=0; i<6; i++)
        printf("%d ", arr[i]);
    return 0;
}
