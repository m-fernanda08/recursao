#include <stdio.h>

void imprimirDec(int n) {
    if (n >= 0) {
        printf("%d ", n);
        imprimirDec(n - 1); 
    }
}

int main() {
    int n;

    printf("Insira um número inteiro N: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("O valor de N deve ser um número inteiro não negativo.\n");
    } else {
        imprimirDec(n);
        printf("\n");
    }

    return 0;
}
