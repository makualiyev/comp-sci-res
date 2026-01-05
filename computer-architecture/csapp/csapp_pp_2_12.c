/**
 * Practice Problem 2.11
 */
#include <stdio.h>


int main(int argc, char *argv[])
{
    int i = 0x87654321;
    int mask = 0xFF;
    int w = 32;
    
    printf("i\t%.8x\n", i);

    printf("result 1:\t%.8x\n", i & mask);
    printf("result 2:\t%.8x\n", i ^ (!mask));
    printf("result 3:\t%.8x\n", i | mask);

    return 0;
}