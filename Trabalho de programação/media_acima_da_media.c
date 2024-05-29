#include <stdio.h>

int main() {
    int n, i;
    printf("Quantos numeros voce deseja inserir? ");
    scanf("%d", &n);

    int numeros[n];
    int soma = 0;

    for (i = 0; i < n; i++) {
        printf("Insira o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    float media = (float)soma / n;
    printf("Media: %.2f\n", media);
    printf("Numeros acima da media:\n");

    for (i = 0; i < n; i++) {
        if (numeros[i] > media) {
            printf("%d ", numeros[i]);
        }
    }

    return 0;
}
