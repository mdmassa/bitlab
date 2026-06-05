#include <stdio.h>

int main() {
    int array[5] = {2,4,6,8,10};
    int *p;

    p = array;

    for(int i=0;i<5;i++){
        *p = *p * 2;
        p++;
    }

    for(int i=0;i<5;i++){
        printf("%d\n", array[i]);
    }

    printf("O valor atual apontado por p e: %d\n", *p);

    return 0;
}