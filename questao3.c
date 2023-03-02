// Questão 3)

#include <stdio.h>

int main() {
    FILE *arquivo;
    int faturamento[31]; // Vetor para armazenar o faturamento diario
    int soma = 0, dias_acima_media = 0;
    int menor, maior, media;

    // Abre o arquivo e verifica se houve erro
    arquivo = fopen("faturamento.xml", "r"); // Necessario substituir o nome do arquivo
    
    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo.\n");
        return 1; // encerra o programa com erro
    }

    // Le o faturamento diario do arquivo e realiza os calculos solicitados
    for (int i = 0; i < 31; i++) {
        fscanf(arquivo, "%d", &faturamento[i]);
        soma += faturamento[i];
        
        if (i == 0) { // inicializa as variaveis menor e maior com o primeiro valor lido
            menor = faturamento[i];
            maior = faturamento[i];
        } else { // atualiza as variaveis menor e maior, se necessário
            if (faturamento[i] < menor) {
                menor = faturamento[i];
            } if (faturamento[i] > maior) {
                maior = faturamento[i];
            }
        }
    }

    // Calcula a media mensal, desconsiderando os dias sem faturamento
    media = soma / 22; // Considerando que o mes possui 22 dias uteis
    
    for (int i = 0; i < 31; i++) {
        if ((faturamento[i] > media) && (faturamento[i] != 0)) {
            dias_acima_media++;
        }
    }

    // Imprimindo os resultados
    printf("Menor faturamento diario: %d\n", menor);
    printf("Maior faturamento diario: %d\n", maior);
    printf("Numero de dias com faturamento acima da media mensal: %d\n", dias_acima_media);

    // Fecha o arquivo
    fclose(arquivo);

    return 0;
}
