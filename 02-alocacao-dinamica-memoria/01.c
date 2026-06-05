#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *sensores;

    printf("Digite a quantidade de sensores desejada: ");
    scanf("%d", &n);

    sensores = (int *)malloc(n*sizeof(int));

    if(sensores == NULL){
        printf("Erro. Memória Insuficiente.\n");
        return 1;
    }

    for(int i=0; i<n; i++){
        printf("Digite o valor do %dº sensor: ", i+1);
        scanf("%d", &sensores[i]);
    }

    printf("\n");

    for(int i=0; i<n; i++){
        printf("Sensor %d: %d\n", i+1, sensores[i]);
    }

    free(sensores);
    sensores = NULL;

    return 0;
}