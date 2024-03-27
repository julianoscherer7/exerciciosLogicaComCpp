#include <iostream>
int main () {
    float a, b, c;
    printf("Digite um numero: ");
    scanf("%f", &a);
    printf("Digite outro numero: ");
    scanf("%f", &b);
    printf("Digite outro numero: ");
    scanf("%f", &c);

    float conta =(a + b + c)/3;
    printf("A sua média é de %f \n", conta);
    return false;


}