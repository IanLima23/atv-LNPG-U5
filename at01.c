#include <stdio.h>

int main() {
    int v[5];
    int maior;
    float soma = 0;

    printf("5 inteiros: ");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &v[i]);
        soma += v[i];
        if(i == 0 || v[i] > maior) {
            maior = v[i];
        }
    }

    printf("Maior: %d\n", maior);
    printf("Media: %.2f\n", soma / 5.0);

    return 0;
}