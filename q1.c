#include <stdio.h>

int somaC(int n) {
    if (n == 1)
        return 1; 
    else
        return (n * n * n) + somaC(n - 1); 
}

int main() {
    int n;

    printf("Insira o valor de n: ");
    scanf("%d", &n);

    int resultado = somaC(n);

    printf("A soma dos cubos dos primeiros %d números é: %d\n", n, resultado);

    return 0;
}
