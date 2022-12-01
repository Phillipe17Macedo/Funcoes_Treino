#include<stdio.h>

void Contador(int n){
    int i;
    for (i = 1; i <= n; i++){
        printf("%d\n", i);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    Contador(n);
    return 0;
}
