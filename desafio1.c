#include <stdio.h>

void main() {
    int num, num2;
    printf("Escreva o primeiro numero: ");
    scanf("%d", &num);
    printf("Escreva o segundo numero: ");
    scanf("%d", &num2);
    if (num > num2) {
        printf("O maior numero eh o %d", num);
    } else if (num < num2) {
        printf("O maior numero eh o %d", num2);
    } else {
        printf("Os numeros sao iguais");
    }
}