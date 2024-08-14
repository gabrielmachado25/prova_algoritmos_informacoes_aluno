#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int i, temperaturaMaxima, temperaturaMinima;
    float minima = 0, maxima = 0, hora[24];
    setlocale(LC_ALL,"Portuguese");

    printf("----- VAMOS ANALISAR A TEMPERATURA DE HORA EM HORA -----\n");

    for(i = 0; i < 24; i++) {
        printf("Digite a temperatura das %d:00: ", i + 1);
        scanf("%f", &hora[i]);
    }

    for(i = 0; i < 24; i++) {
        if(minima > hora[i]) {
            minima = hora[i];
            temperaturaMinima = i;
        }
        if(maxima < hora[i]) {
            maxima = hora[i];
            temperaturaMaxima = i;
        }
    }
    printf("\n");
    printf("A temperatura m�nima encontrada foi de %.2f�C. \n", minima);
    printf("A temperatura m�xima encontrada foi de %.2f�C. ", maxima);
    printf("\n");
    return 0;
}
