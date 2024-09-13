#include <stdio.h>

int smtr(int n) {
    if (n == 1) {
        return 1; 
    } else {
        return n + smtr(n - 1); 
    }
}

int main() {
    int n;

    printf("Insira um número inteiro N: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("O valor de N deve ser um número inteiro positivo.\n");
    } else {
        int resultado = smtr(n);
        printf("O somatório dos números de 1 a %d é: %d\n", n, resultado);
    }

    return 0;
}
