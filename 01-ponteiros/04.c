#include <stdio.h>

void modoEconomico();
void modoPerformance();

int main() {
    void (*p)();

    p = modoEconomico;
    p();
    p = modoPerformance;
    p();

    return 0;
}

void modoEconomico() {
    printf("Sistema operando em modo de baixo consumo.\n");
}

void modoPerformance() {
    printf("Sistema operando em modo de alta performance.\n");
}
