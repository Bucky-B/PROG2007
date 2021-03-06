#include<stdio.h>


int main(){


    float flt;
    double dbl = 12345678.987654321;

    /* implicit conversion from float to double */
//    dbl = flt;
    printf("flt = %f, dbl = %f\n", flt, dbl);

    /* Explicit conversion from double to float */
    flt = dbl;
    printf("flt = %f, dbl = %f\n", flt, dbl);

    int num;

    /* Explicit conversion from double to int*/
    num = dbl;
    printf("dbl = %f, num = %i\n", dbl, num);

    /* Explicit conversion in a formula*/


    int my_constant = 123456;
    dbl = (double)my_constant * 0.5;

    printf("dbl = %f\n", dbl);
    return 0;
}