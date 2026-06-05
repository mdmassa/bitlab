#include <stdio.h>
#include <stdlib.h>

int main() {
    int *nums = (int *)calloc(2,sizeof(int));

    for(int i=0; i<2; i++){
        printf("Digite o numero %d: ", i+1);
        scanf("%d", &nums[i]);
    }

    int *temp = (int *)realloc(nums,4*sizeof(int));

    if(temp != NULL){
        nums = temp;
    } else {
        printf("Erro ao expandir memória.\n");
        free(nums);
        nums = NULL;
        return 1;
    }

    for(int i=2; i<4; i++){
        printf("Digite o numero %d: ", i+1);
        scanf("%d", &nums[i]);
    }

    printf("\n");

    for(int i=0; i<4; i++){
        printf("Array[%d]: %d\n", i, nums[i]);
    }

    free(nums);
    nums = NULL;

    return 0;
}