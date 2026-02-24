 #include <stdio.h>

 int potencia(int x, int y) {
    if (y == 0) {
        return 1;
    }
    else {
        return x * potencia(x, y - 1);
    }
 }

 int main() {
    int base, expoente;
    
    printf("digite a base: ");
    scanf("%d", &base);
    printf("digite o expoente: ");
    scanf("%d", &expoente);
    
    printf("%d elevado a %d = %d\n", base, expoente, potencia(base, expoente));
    
    return 0;
}
