#include <stdio.h>

int main() {
    int numero;
    printf("Digite um numero com 4 digitos: ");
    scanf("%d", &numero);

    while (numero < 1000 || numero > 9999) {
        printf("O numero digitado nao possui 4 digitos. Tente novamente: ");
        scanf("%d", &numero);
    }

    int tres_primeiros_digitos = numero / 10;
    int inverso = (tres_primeiros_digitos % 10) * 100 + ((tres_primeiros_digitos / 10) % 10) * 10 + (tres_primeiros_digitos / 100);
    int soma = inverso + tres_primeiros_digitos;
    int sobra = numero % 10;
    printf("Dígito verificador: %d\n", sobra);
    printf("Soma dos três primeiros números com seu inverso: %d\n", soma);
    int centenas = soma / 100;
    int dezenas = (soma / 10) % 10;
    int unidades = soma % 10;

    int multiplica = centenas * 1 + dezenas * 2 + unidades * 3;

    printf("Último dígito é o código verificador: %i\n", multiplica);
    int verdadeiro = multiplica % 10;
    if (sobra != verdadeiro) {
        printf("A senha não é válida.\n");
    } else {
        printf("A senha é válida.\n");
    }

    return 0;
}
