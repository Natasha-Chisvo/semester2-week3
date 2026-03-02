
/*
 * Use the sizeof() operator to examine memory use 
 * of primitive types char,int,float
 */

#include <stdio.h>

int main( void ) {

    char testChar;
    int testInt;
    float testFloat;
    short int testShort;
    long int testLong;
    double testdbl;

    printf("Char size is %ld bytes\n",sizeof(testChar));
    printf("Int size is %ld bytes\n",sizeof(testInt));
    printf("Float size is %ld bytes\n",sizeof(testFloat));
    printf("Short int size is %ld bytes\n", sizeof(testShort));
    printf("Long int size is %ld bytes\n", sizeof(testLong));
    printf("Double int size is %ld bytes\n", sizeof(testdbl));

    return 0;
}
