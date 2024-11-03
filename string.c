#include <stdio.h>


int main(){

    char str[100];

    printf("Enter a string: ");
    gets(str);

    printf("\nThe string is: ");
    printf("%5.3s",str);

    return 0;
}