#include <stdio.h>
#include <stdint.h>

int uadd_ok(unsigned x, unsigned y)
{
    unsigned sum = x + y;
    if ((sum >= x) || (sum >= y)) {
        return 0;
    }
    return 1;
}

int main(void)
{
    unsigned a = 1410065408;
    unsigned b = 1910065408;
    unsigned sum = a + b;
    long int ssum = (long)1410065408 + (long)1910065408;

    printf("U sum=%u\n", sum);
    printf("S sum=%ld\n", ssum);
    printf("result=%d\n", uadd_ok(a, b));

    return 0;
}