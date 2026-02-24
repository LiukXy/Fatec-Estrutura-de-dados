#include <stdio.h>

int fibonacci (int n) {
    if (n == 0) {
        return 0 ;
    }
    else if (n == 1) {
        return 1;
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
 }

int main () {
    int numero;
    
    printf("qual numero da sequência fibonacci você quer: ");
    scanf("%d", &numero);
    
    printf("o %dº numero da fibonacci é: %d\n", numero, fibonacci(numero));
    
    printf("a sequencia e: ");
    for (int i = 0; i <= numero; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    
    return 0;
}
