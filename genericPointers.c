#include<stdio.h>

int main(){
     
    int num=23;
    char ch = 'A';
    void *gptr;

    gptr = &num;
    printf("Generic pointer pointing to integer: %d", *(int*)gptr);

    gptr = &ch;
    printf("\nGeneric pointer pointing to character: %c", *(char*)gptr);


    return 0;
}