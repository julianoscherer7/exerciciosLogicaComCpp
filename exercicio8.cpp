#include <iostream>
int main () {
    int a, b, c;
    printf("Digite o cateto de um triangulo: ");
    scanf("%d", &a);
    printf("Digite o outro cateto de um triangulo: ");
    scanf("%d", &b);
    printf("Digite a hipotenusa de um triangulo: ");
    scanf("%d", &c);
    int conta = (a+b) > c;
    printf("%d\n", conta);
    return 0;
}