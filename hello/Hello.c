#include <stdio.h>
#include <stdint.h>
#include <float.h>

int main() {

    /* DataTypes */
    int num = 123456;
    float fnum = 3.14159f;
    char ch = 'a';


    printf("range: %i to %i, num = %i\n", INT32_MIN, INT32_MAX);
    printf("range: %g to %g, fnum = %f\n", -FLT_MAX, FLT_MAX, fnum);
    printf("ch = %c (%i)\n", ch, ch);

    /* Special datatypes */

    unsigned int unum = 123456;
    unsigned short int snum = 32768;
    long int lnum = 2147483648L;
    unsigned long int ulnum = 2147483648L;

    printf("range: %u to %u, unum = %u\n", 0, UINT32_MAX, unum);
    printf("range: %u to %u, snum = %hu\n", 0, UINT16_MAX, snum);
    printf("range %li to %li, lnum = %li\n", INT32_MIN, INT32_MAX, lnum);
    printf("range %li to %li, lnum = %li\n", INT32_MIN, INT32_MAX, lnum);


    return 0;
}