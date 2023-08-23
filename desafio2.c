#include <stdio.h>

void main() {
    int num;
    printf("Escreva um numero: ");
    scanf("%d", num);
    if (num >= 0) {
        printf("O numero %d eh positivo", num);
    } else {
        printf("O numero eh negativo");
    }
}