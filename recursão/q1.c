#include <stdio.h>
#include <stdlib.h>

//função recursiva
int somaCubos(int n) {

    if (n == 1) {
        return 1;
    }
    //soma o cubo de n + soma dos cubos anteriores
    return (n * n * n) + somaCubos(n - 1);
}

int main() {
    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);


    if (n <= 0) {
        printf("O valor de n deve ser um número positivo.\n");
    } else {
      
        printf("A soma dos primeiros %d cubos é: %d\n", n, somaCubos(n));
    }

    return 0;
}
