#include <stdio.h>

int somaVet(int vetor[], int n) {
    if (n == 1) {
        return vetor[0];  
    } else {
        return vetor[n-1] + somaVet(vetor, n-1);
    }
}

float mediaVet(int vetor[], int n) {
    int soma = somaVet(vetor, n);  
    return (float)soma / n;  
}

int main() {
    int n;

    printf("Insira o tamanho do vetor: ");
    scanf("%d", &n);

    int vetor[n];

    printf("Insira os elementos do vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    float media = mediaVet(vetor, n);
    printf("A média dos elementos do vetor é: %.2f\n", media);

    return 0;
}
