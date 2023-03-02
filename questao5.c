// Questão 5)

#include <stdio.h>
#include <string.h>

// Criando funcao para inverter as strings
void inverter(char* str) {
    int len = strlen(str) - 1;

    for (int i = 0, j = len; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

// Main principal onde utilizaremos a funcao inverter
int main() {
    char str[100];

    // Pedindo o numero ao usuario
    printf("Digite um string: ");
    fgets(str, sizeof(str), stdin);

    // Imprimindo o resultado
    inverter(str);
    printf("String invertida: %s\n", str);

    return 0;
}
