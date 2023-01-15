#include <stdio.h>
#include <math.h>

float solicitarNumero() {
    float num;
    do {
        printf("Insira um numero real positivo no range [0,1]: ");
        scanf("%f", &num);
    } while(num < 0 || num > 1);
    return num;
}

float arctan(float x) {
    float resultado = x, termo = x;
    int i = 3;
    for (int j = 1; j < 30; j++) {
        termo = -termo * x * x / (i * (i+1));
        resultado += termo;
        i += 2;
    }
    return resultado;
}

void imprimirResultado(float num) {
    printf("O arco tangente de %f em radianos e: %f\n", num, arctan(num));
}

int main() {
    float num = solicitarNumero();
    imprimirResultado(num);
    return 0;
}
