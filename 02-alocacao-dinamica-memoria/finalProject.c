#include <stdio.h>
#include <stdlib.h>

int main() {
    int n=3,op,i=0;
    float *temperaturaMotor = (float *)calloc(n, sizeof(float));

    do {
        printf("Digite a temperatura atual do motor: ");
        scanf("%f", &temperaturaMotor[i]);
        printf("Agora você deseja:\n1-Inserir nova leitura\n2-encerrar monitoramento\n\n>> ");
        scanf("%d", &op);

        if(op==1){
            i++;
            if(i>=n){
                printf("Alerta. Buffer cheio. Expandindo capacidade para %d posições.\n\n",i+1);
                float *temp = (float *)realloc(temperaturaMotor, (i+1)*sizeof(float));
                n++;

                if(temp == NULL){
                    printf("Erro. Espaço insuficiente na memória.\n");
                    return 1;
                } else {
                    temperaturaMotor = temp;
                }
            }
        }

    } while(op!=2);

    for(i=0;i<n;i++){
        printf("%dª temperatura registrada: %.2f\n", i+1,temperaturaMotor[i]);
    }

    printf("Total de registros realizados: %d\n", n);

    free(temperaturaMotor);
    temperaturaMotor = NULL;

    return 0;
}