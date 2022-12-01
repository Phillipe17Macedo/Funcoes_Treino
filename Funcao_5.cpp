#include <stdio.h>

double somaTermo(double a1, double a2, int n){
    double somaPA;

    somaPA = (n * (a1 + a2))/2;

    return somaPA;
}

int main() {

    double a1, a2, soma;
    int n;

    scanf("%lf %lf %d", &a1, &a2, &n);

    soma = somaTermo(a1, a2, n);

    printf("%lf\n", soma);

    return 0;
}
