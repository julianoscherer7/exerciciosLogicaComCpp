#include <iostream>
int main () {
    int a;
    printf("Informe um numero: ");
    scanf("%d", &a);
    printf("%d\n", (a % 3 ==0) && (a % 5 ==0));
    return 0;

}