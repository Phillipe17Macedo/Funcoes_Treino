#include <stdio.h>
#include <math.h>

void Equacao(double a, double b, double c){
    double raiz1, raiz2, delta;

    delta = (b * b) - (4 * a * c);

    if (delta == 0){
        raiz1 = ( -b + sqrt(delta)) / 2 * a;
        printf("%.2lf\n", raiz1);

    } else if (delta > 0){
        raiz1 = ( -b + sqrt(delta)) / 2 * a;
        raiz2 = ( -b - sqrt(delta)) / 2 * a;
        printf("%.2lf %.2lf\n", raiz1, raiz2);
    } else {
        printf("Nao existem raizes\n");
    }
}

int main() {

    double a, b, c, raiz1, raiz2;

    scanf("%lf %lf %lf", &a, &b, &c);

    Equacao(a, b, c);
    return 0;
}

