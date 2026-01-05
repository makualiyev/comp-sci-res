#include <stdio.h>

#define PRINT_INT_VAL(x) printf("%s = %d\n", #x, x);
#define CAT(a, b) a ## b

int main()
{
    printf("%f\n", CAT(3.14, 1592));
    return 0;
}