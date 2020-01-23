#include<stdio.h>


int main(){

    int i = 256, j =7;
    int next_multiple;

    printf("Enter the value to round off: ");
    scanf("%i", &i);
    printf("Enter the divisor: ");
    scanf("%i", &j);

    next_multiple = i + j - i % j;

    printf("Next multiple = %i\n", next_multiple);

    return 0;
}