#include <iostream>
int main() {
    int a;
    printf("Digite um ano para descobrir se é bissexto: ");
    scanf("%d", &a);

    printf("%d\n", (
        (a %4 == 0) && (a %100 != 0 ) 
        ||
     ((a  % 100 == 0) && (a %400 == 0))
    ));
    return 0;
}
