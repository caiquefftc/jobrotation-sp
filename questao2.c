// Questão 2)

#include <stdio.h>

int main() {
    
    // Definindo as variaveis
    int numero;
    int anterior = 1;
    int atual = 1;
    int proximo;

    // Pedindo o numero ao usuario
    printf("Digite um numero: ");
    scanf("%d", &numero);

    // Verificando se o numero pertece a sequencia de Fibonacci
    while (atual <= numero) {
        if (atual == numero) {
            printf("%d pertence a sequencia de Fibonacci.\n", numero);
            return 0;
        }
        
        proximo = atual + anterior;
        anterior = atual;
        atual = proximo;
    }

    // Imprimindo os resultados
    printf("%d nao pertence a sequencia de Fibonacci.\n", numero);
    return 0;
}
