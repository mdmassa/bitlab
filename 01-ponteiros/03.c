#include <stdio.h>

void copiarString(char *destino, const char *origem);

int main() {
    char origem[] = "Monad", destino[10];

    printf("Origem: %s\n", origem);

    copiarString(destino, origem);

    printf("Destino: %s\n", destino);

    return 0;
}

void copiarString(char *destino, const char *origem) {
    while(*origem != '\0') {
        *destino = *origem;
        origem++;
        destino++;
    }

    *destino='\0';
}