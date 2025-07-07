#include <stdio.h>

void inplace_swap(int *x, int *y)
{
    printf("\tinside function:\n");
    *y = *x ^ *y;   /* Step 1 */
    printf("\t\tStep 1: a=%d\tb=%d\n", *x, *y);
    *x = *x ^ *y;   /* Step 2 */
    printf("\t\tStep 2: a=%d\tb=%d\n", *x, *y);
    *y = *x ^ *y;   /* Step 3 */
    printf("\t\tStep 3: a=%d\tb=%d\n", *x, *y);
}

int main()
{
    int a = 3;
    int b = 4;
    printf("a=%d, b=%d\n", a, b);
    
    inplace_swap(&a, &b);

    printf("inplace swapped\na=%d, b=%d\n", a, b);
    return 0;
}