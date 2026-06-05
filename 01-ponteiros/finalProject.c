#include <stdio.h>

void caixaAlta(char *string);
void stringReversa(char *string);
int conteVogais(char *string);

int main() {
    char string[50] = "Engenharia";
    int vogais, op;

    scanf("%d", &op);

    switch(op) {
        case 1:
            caixaAlta(string);
            break;

        case 2:
            vogais = conteVogais(string);
            printf("Quantidade de vogais na palavra: %d\n", vogais);
            break;

        case 3:
            stringReversa(string);
            break;

        default:
            printf("Valor inválido.\n");
            break;
    }

    return 0;
}

void caixaAlta(char *string) {
    char *p = string;

    while(*p != '\0') {
        if(*p >= 'a' && *p <= 'z') {
            *p = *p - 32;
        }
        p++;
    }
    
    printf("%s\n", string);
}

void stringReversa(char *string) {
    char *p1, *p2, temp;

    p1=string;
    p2=string;

    while(*p2 != '\0') {
        p2++;
    }
    p2--;

    while(p1 < p2) {
        temp = *p1;
        *p1 = *p2;
        *p2 = temp;
        p1++;
        p2--;
    }

    printf("%s\n", string);
}

int conteVogais(char *string) {
    int vogais=0;
    char *p = string;

    while(*p != '\0') {
        if(*p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u' || *p == 'A' || *p == 'E' || *p == 'I' || *p == 'O' || *p == 'U'){
            vogais++;
        }
        p++;
    }

    return vogais;
}

