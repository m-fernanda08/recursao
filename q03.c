#include <stdio.h>

void imprimirNum(int n) {
    if (n >= 0) {
        imprimirNum(n - 1); 
        printf("%d ", n); 
    }
}

int main() {
    int n;

    printf("Insira um número inteiro N: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("O valor de N deve ser um número inteiro não negativo.\n");
    } else {
        imprimirNum(n); 
        printf("\n");
    }

    return 0;
}
