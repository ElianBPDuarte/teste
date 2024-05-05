#include <stdio.h>

int main(void) {
    float compra;
    int quantidade;
    float total_compra = 0;
    int total_produtos = 0;
    int cedula100, cedula50, cedula20, cedula10, cedula5, cedula2, moeda1;

    do {
        printf("Qual o valor da compra? (Digite 0 ou um valor negativo para sair)\n");
        scanf("%f", &compra);

        if (compra <= 0) {
            if (total_produtos == 0) {
                printf("Nenhuma compra foi realizada.\n");
            } else {
                printf("O total acumulado das compras foi: R$ %.2f\n", total_compra);

                int centavos = ((int)(total_compra * 100) % 100);
                int valor_inteiro = (int)total_compra;

                cedula100 = valor_inteiro / 100;
                valor_inteiro %= 100;

                cedula50 = valor_inteiro / 50;
                valor_inteiro %= 50;

                cedula20 = valor_inteiro / 20;
                valor_inteiro %= 20;

                cedula10 = valor_inteiro / 10;
                valor_inteiro %= 10;

                cedula5 = valor_inteiro / 5;
                valor_inteiro %= 5;

                cedula2 = valor_inteiro / 2;
                valor_inteiro %= 2;

                moeda1 = valor_inteiro;

                printf("Notas/Moedas:\n");
                printf("Notas de 100: %d\n", cedula100);
                printf("Notas de 50: %d\n", cedula50);
                printf("Notas de 20: %d\n", cedula20);
                printf("Notas de 10: %d\n", cedula10);
                printf("Notas de 5: %d\n", cedula5);
                printf("Notas de 2: %d\n", cedula2);
                printf("Moedas de 1: %d\n", moeda1);
                printf("Centavos: %d\n", centavos);
            }
            printf("Programa encerrado.\n");
            break;
        }

        printf("Qual a quantidade deste produto? ");
        scanf("%d", &quantidade);

        if (quantidade <= 0) {
            printf("Quantidade inválida! Esta compra será anulada.\n");
        } else {
            float total = compra * quantidade;
            printf("O total da compra é: R$ %.2f\n", total);
            total_compra += total;
            total_produtos += quantidade;
        }
    } while (1);

    return 0;
}
