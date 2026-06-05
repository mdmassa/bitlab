#include <stdio.h>

void filtrarLeituras(int *ptr_dados, int tamanho) {
    for(int i = 0; i < tamanho; i++) {
        *ptr_dados -= 10;
        
        if(*ptr_dados <= 0) {
            *ptr_dados = 0;
        }
        
        ptr_dados++; 
    }
}

int main() {
    int leituras[5] = {105, 8, 45, 3, 200};
    int tamanho = 5;

    printf("Antes do filtro:\n");
    for(int i = 0; i < tamanho; i++) {
        printf("%d ", leituras[i]);
    }
    printf("\n");

    filtrarLeituras(leituras, tamanho);

    printf("Depois do filtro:\n");
    for(int i = 0; i < tamanho; i++) {
        printf("%d ", leituras[i]);
    }
    printf("\n");

    return 0;
}