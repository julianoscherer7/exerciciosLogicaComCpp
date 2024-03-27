#include <iostream>
int main () {
    float a, b, c, d, e, f;
    printf("Me dê sua nota: ");
    scanf("%f", &a);
    printf("Diga seu respectivo peso: ");
    scanf("%f", &b);
    printf("Me dê sua nota: ");
    scanf("%f", &c);
    printf("Diga seu respectivo peso: ");
    scanf("%f", &d);
    printf("Me dê sua nota: ");
    scanf("%f", &e);
    printf("Diga seu respectivo peso: ");
    scanf("%f", &f);
    float conta = (a*b + c*d + e*f) / (b + d + f);
    printf("A sua média ponderada é de: %.2f\n", conta);
    return 0;

}