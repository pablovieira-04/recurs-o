#include <stdio.h>
#include <stdlib.h>

// função recursiva 
void imprimirNumeros(int N) {

    if (N < 0) {
        return;
    }
    
    imprimirNumeros(N - 1);
    
    printf("%d\n", N);
}

int main() {
    int N;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    imprimirNumeros(N);

    return 0;
}
