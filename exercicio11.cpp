#include <iostream>
int main() {
    int a, b;
    printf("Base do triangulo: ");
    scanf("%d", &a);
    printf ("Altura do triangulo: ");
    scanf("%d", &b);
    int conta = (a*b) / 2;
    printf("A área do seu triangulo é de: %d\n", conta);
    return 0;

}