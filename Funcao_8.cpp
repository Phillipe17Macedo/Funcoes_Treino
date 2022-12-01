#include<stdio.h>

double juros(double c, int m, double t){
    double juros = c * m * t;
    return juros;
}

int main(){
    double c, t;
    int m;
    scanf("%lf %d %lf", &c, &m, &t);
    printf("%lf", juros(c, m, t));

    return 0;
}
