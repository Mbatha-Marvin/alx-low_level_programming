#include <stdio.h>

/**
 * Entry point - main
 *
 * Prints out the size of various data types
 *
 *Returns: Always 0 (success)
 */

int main(void)
{
        int intType;
        float floatType;
        long int longIntType;
        long long int longLongIntType;
        char charType;

        //evaluates size of a variable, prints size

        printf("Size of a char: %zu byte(s)\n", sizeof(charType));
        printf("Size of an int: %zu byte(s)\n", sizeof(intType));
        printf("Size of a long int: %zu byte(s)\n", sizeof(longIntType));
        printf("Size of a long long int: %zu byte(s)\n", sizeof(longLongIntType));
        printf("Size of a float: %zu byte(s)\n", sizeof(floatType));

        return (0);
}
