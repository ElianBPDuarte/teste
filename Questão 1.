#include <stdio.h>

int main(void) {
    float valor_do_bem;
    int valor_anos;
    float valor_depreciacao;

    printf("INFORME O VALOR DO BEM A SER DEPRECIADO: \n");
    scanf("%f", &valor_do_bem);

    printf("INFORME O VALOR DA DEPRECIAÇÃO: \n");
    scanf("%f", &valor_depreciacao);

    float taxa_depreciacao = (valor_depreciacao / valor_do_bem) * 100;

    printf("INFORME O NÚMERO DE ANOS: \n");
    scanf("%i", &valor_anos);

    float valor_depreciado = valor_do_bem - valor_depreciacao;
    float total_depreciado = valor_depreciacao;

    printf("Após 1 ano, bem depreciado: %.2f\n", valor_depreciado);

    for (int i = 2; i <= valor_anos; i++) {
      
        float deprec_anual = valor_depreciado * (taxa_depreciacao / 100);
        valor_depreciado -= deprec_anual;
        printf("%d° ano, Valor de depreciação em: %.2f\n", i, deprec_anual);
        printf("%d° ano, Bem depreciado é: %.2f\n", i, valor_depreciado);
        total_depreciado += deprec_anual;
    }

    printf("Total de depreciação ao longo dos anos é: %.2f\n", total_depreciado);

    return 0;
}
