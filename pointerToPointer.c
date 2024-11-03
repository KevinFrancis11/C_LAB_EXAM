#include<stdio.h>

int main(){
    int x = 10;
    int *px;
    int **ppx;

    px = &x;
    ppx = &px;

    printf("%d", **ppx);

    return 0;
}