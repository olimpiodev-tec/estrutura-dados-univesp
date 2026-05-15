#include <stdio.h>

#define alturaMaxima 225

typedef struct {
    int peso;
    int altura;
} PesoAltura;

int main() {
    PesoAltura pessoa1;
    pessoa1.peso = 80;
    pessoa1.altura = 185;
    
    printf("Peso: %i, Altura: %i\n", pessoa1.peso, pessoa1.altura);
    
    if (pessoa1.altura > alturaMaxima) {
        printf("Pessoa acima da altura máxima!");
    } else {
        printf("Pessoa abaixo da altura máxima");
    }
    
    printf("\n\n-----Endereços de Memória-----");
    
    printf("\nPessoa: %p", &pessoa1);
    printf("\nAltura: %p", &(pessoa1.altura));
    printf("\n  Peso: %p", &(pessoa1.peso));
    
    printf("\n\n-----Qtde de Memória Alocada-----");
    
    printf("\nPessoa: %i bytes", sizeof(pessoa1));
    printf("\nAltura: %i bytes", sizeof(pessoa1.altura));
    printf("\n  Peso: %i bytes", sizeof(pessoa1.peso));

    return 0;
}
