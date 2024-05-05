#include <stdio.h>

int main() {
    int andar[3];

for(int i = 0; i<3; i++){
printf("quantas pessoas no %i° andar?", i+1);
    while(scanf("%i", &andar[i]) !=1 || andar[i] <0 || andar[i] > 1000);
        }
    int andar1 = andar[1] * 2 + andar[2] * 4; 
    int andar2 = andar[0] * 2 + andar[2] * 2;
    int andar3 = andar[0] * 4 + andar[1] * 2;

    if (andar1 < andar2 && andar1 < andar3) {
        printf("%i", andar1);
    } else if (andar2 < andar1 && andar2 < andar3) {
        printf("%i", andar2);
    } else {
        printf("%i", andar3);
    }

    return 0;
}