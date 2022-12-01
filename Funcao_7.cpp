#include<stdio.h>

int somaMaiorEMenor(int a, int b, int c){
    int maior, menor;
    if(a >= b && a >= c){
        maior = a;
        if(b <= c){
            menor = b;
        } else {
            menor = c;
        }
    } else if (b >= a && b >= c){
        maior = b;
        if(a <= c){
            menor = a;
        } else {
            menor = c;
        }
    } else if (c >= a && c >= b){
        maior = c;
        if(a <= b){
            menor = a;
        } else {
            menor = b;
        }
    }

    return (menor + maior);
}


int main (){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", somaMaiorEMenor(a, b, c));
    return 0;

}
