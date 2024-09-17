#include <stdio.h>

int main() {
    int n; // Número de temperaturas
    printf("Quantas temperaturas você deseja inserir? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Número de temperaturas deve ser maior que zero.\n");
        return 1; // Código de erro
    }

    float temperaturas[n]; // Array para armazenar as temperaturas
    float soma = 0.0, media, max, min;

    // Coletar temperaturas
    for (int i = 0; i < n; i++) {
        printf("Digite a temperatura %d: ", i + 1);
        scanf("%f", &temperaturas[i]);
    }

    // Inicializar max e min com a primeira temperatura
    max = min = temperaturas[0];

    // Processar as temperaturas
    for (int i = 0; i < n; i++) {
        soma += temperaturas[i];
        
        // Encontrar a temperatura máxima
        if (temperaturas[i] > max) {
            max = temperaturas[i];
        }

        // Encontrar a temperatura mínima
        if (temperaturas[i] < min) {
            min = temperaturas[i];
        }
    }

    // Calcular a média
    media = soma / n;

    // Exibir os resultados
    printf("Média das temperaturas: %.2f\n", media);
    printf("Temperatura máxima: %.2f\n", max);
    printf("Temperatura mínima: %.2f\n", min);

    return 0;
}
