#include <stdio.h>

int main() {
    int num_participantes, num_qualificados;

    printf("Digite o número de participantes (até 1000): ");
    scanf("%d", &num_participantes);

    if (num_participantes < 1 || num_participantes > 1000) {
        printf("Número de participantes inválido. Por favor, digite um valor entre 1 e 1000.\n");
        return 1;
    }

    int notas_participantes[num_participantes];

    printf("Digite as notas de todos os participantes:\n");
    for (int i = 0; i < num_participantes; i++) {
        printf("Nota do participante %d: ", i + 1);
        scanf("%d", &notas_participantes[i]);
    }

    printf("Digite o número de participantes qualificados: ");
    scanf("%d", &num_qualificados);

    if (num_qualificados < 0 || num_qualificados > num_participantes) {
        printf("Número de participantes qualificados inválido. Por favor, digite um valor entre 0 e %d.\n", num_participantes);
        return 1;
    }

    for (int i = 0; i < num_participantes - 1; i++) {
        for (int j = 0; j < num_participantes - i - 1; j++) {
            if (notas_participantes[j] < notas_participantes[j + 1]) {
                int temp = notas_participantes[j];
                notas_participantes[j] = notas_participantes[j + 1];
                notas_participantes[j + 1] = temp;
            }
        }
    }

    int nota_limite = notas_participantes[num_qualificados - 1];

    int num_classificados = 0;
    for (int i = 0; i < num_participantes; i++) {
        if (notas_participantes[i] >= nota_limite) {
            num_classificados++;
        } else {
            break;
        }
    }

    if (num_classificados > 0) {
        printf("Número de participantes classificados: %d\n", num_classificados);
    } else {
        printf("Nenhum participante está classificado.\n");
    }

    return 0;
}
