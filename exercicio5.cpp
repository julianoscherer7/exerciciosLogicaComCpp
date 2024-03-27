#include <iostream>
int main () {
    int num;
    printf("Digite a temperatura da sua cidade em CELSIUS: ");
    scanf("%d", &num);
    int conta = ((num * 9/5) + 32);
    printf("Sua temperatura em Fahrenheit é de: %d\n", (num * 9/5) + 32);
    return false;

}
