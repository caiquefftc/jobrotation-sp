// Questão 4)

#include <stdio.h>

int main()
{
    // Valor de faturamento mensal por estado
    float sp = 67836.43;
    float rj = 36678.66;
    float mg = 29229.88;
    float es = 27165.48;
    float outros = 19849.53;

    // Valor total mensal
    float valor_total = sp + rj + mg + es + outros;

    // Percentual de representação de cada estado
    float perc_sp = (sp / valor_total) * 100;
    float perc_rj = (rj / valor_total) * 100;
    float perc_mg = (mg / valor_total) * 100;
    float perc_es = (es / valor_total) * 100;
    float perc_outros = (outros / valor_total) * 100;

    // Imprimindo os resultados
    printf("Percentual de representacao de cada estado:\n\n");
    printf("SP: %.2f%%\n", perc_sp);
    printf("RJ: %.2f%%\n", perc_rj);
    printf("MG: %.2f%%\n", perc_mg);
    printf("ES: %.2f%%\n", perc_es);
    printf("Outros: %.2f%%\n", perc_outros);

    return 0;
}
