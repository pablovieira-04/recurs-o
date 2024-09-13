#include <stdio.h>
#include <stdlib.h>

// função recursiva 
void imprimirNumerosDecrescentes(int N) {

    if (N < 0) {
        return;
    }
    
    printf("%d\n", N);
    
    imprimirNumerosDecrescentes(N - 1);
}

int main() {
    int N;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    imprimirNumerosDecrescentes(N);

    return 0;
}
