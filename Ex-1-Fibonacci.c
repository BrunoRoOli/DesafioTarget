#include <stdio.h>

int pertenceAFibonacci(int n) {
    int a = 0, b = 1, c;
    
    if (n == 0 || n == 1) {
        return 1;
    }
    
    while (b < n) {
        c = a + b;
        a = b;
        b = c;
    }
    
    if (b == n) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int numero;
    
    printf("Informe um número: ");
    scanf("%d", &numero);
    
    if (pertenceAFibonacci(numero)) {
        printf("O número %d pertence à sequência de Fibonacci.\n", numero);
    } else {
        printf("O número %d NÃO pertence à sequência de Fibonacci.\n", numero);
    }
    
    return 0;
}
