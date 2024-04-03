#include <iostream>

int main () {
    int a;
    printf("Digite uma hora para transformar em segundos:");
    scanf("%d", &a);
    int conta = ((a*60) * 60);
    printf("A sua hora em segundos é de: %d\n", conta);
    return 0;
    

}