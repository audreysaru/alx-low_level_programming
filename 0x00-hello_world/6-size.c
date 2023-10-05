#include <stdio.h>

/**
 * main - prints size of various types int, float, char on the comp its run on
 *
 * Return: 0 when successful
 */

int main() {
    int intType;
    float floatType;
    double doubleType;
    char charType;

    printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of float: %zu bytes\n", sizeof(floatType));
    printf("Size of double: %zu bytes\n", sizeof(doubleType));
    printf("Size of char: %zu byte\n", sizeof(charType));
    
    return 0;
}
