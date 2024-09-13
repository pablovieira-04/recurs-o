#include <stdio.h>
#include <stdlib.h>

//função recursiva
int somaNumeros(int N) {
    
    if (N == 1) {
        return 1;
    }
 
    return N + somaNumeros(N - 1);
}

int main() {
    int N;

    printf("Digite o valor de N: ");
    scanf("%d", &N);


    if (N <= 0) {
        printf("O valor de N deve ser um número positivo.\n");
    } else {
    
        printf("A soma dos números de 1 a %d é: %d\n", N, somaNumeros(N));
    }

    return 0;
}
