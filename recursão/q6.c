#include <stdio.h>

// função
int somaVetor(int *vetor, int tamanho) {
    if (tamanho == 0) {
        return 0;
    }

    return vetor[tamanho - 1] + somaVetor(vetor, tamanho - 1);
}

double mediaVetor(int *vetor, int tamanho) {
    if (tamanho == 0) {
        return 0;
    }
    int soma = somaVetor(vetor, tamanho);
    return (double) soma / tamanho;
}

int main() {
    int tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    if (tamanho <= 0) {
        printf("O tamanho do vetor deve ser um número positivo.\n");
        return 1;
    }

    int vetor[tamanho];

    printf("Digite os %d elementos do vetor:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }

    double media = mediaVetor(vetor, tamanho);
    printf("A média dos elementos do vetor é: %.2f\n", media);

    return 0;
}
