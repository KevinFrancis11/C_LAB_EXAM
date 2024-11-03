#include<stdio.h>

void add(int *ptr1,int *ptr2){
    int sum = *ptr1 + *ptr2;
    printf("The sum is: %d", sum);
}


int main(){
    int num1, num2;
   

    printf("Ënter two numbers: ");
    scanf("%d  %d", &num1, &num2);


    add(&num1, &num2);
}