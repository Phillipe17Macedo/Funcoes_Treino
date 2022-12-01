#include<stdio.h>

int MaiorMenor(int x, int y){
    if (x > y){
        return x;
    }else {
        return y;
    }

}

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", MaiorMenor(x , y));

    return 0;
}
