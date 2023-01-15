#include <stdio.h>

int main() {
    float media, maior, menor, soma = 0;
    int n;
    printf("Digite o numero de alunos: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++) {
        printf("Digite a media do aluno: ");
        scanf("%f", &media);

        if(media < 0) {
            break;
        }

        // Atualiza a maior e menor media
        if(i == 0) {
            maior = media;
            menor = media;
        } else {
            if(media > maior) {
                maior = media;
            }
            if(media < menor) {
                menor = media;
            }
        }

        soma += media;
    }

    float media_aritmetica = soma / n;

    printf("Maior media: %.2f\n", maior);
    printf("Menor media: %.2f\n", menor);
    printf("Media aritmetica: %.2f\n", media_aritmetica);

    return 0;
}