#include <stdio.h>

int somaPares (){
    int a, b, pares = 0;
    scanf("%d %d", &a, &b);

    for (int i = (a + 1); i < b; i++){
        if (i % 2 == 0){
            pares += i;
        }
    }
    return pares;
}

int main() {
    int a, b;

    printf("%d", somaPares(a,b));

    return 0;
}
