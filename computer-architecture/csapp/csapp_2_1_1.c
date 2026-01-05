/**
 * CSAPP, Part I, Chapter 2, Section 2.1 Information Storage
 * Example from page 45
 */
#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len)
{
    int i;
    for (i = 0; i < len; i++) {
        printf(" %.2x", start[i]);
    }
    printf("\n");
}

void show_int(int x) {
    show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x) {
    show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x) {
    show_bytes((byte_pointer) &x, sizeof(void *));
}

void test_show_bytes(int val)
{
    int ival = val;
    float fval = (float) ival;
    int *pval = &ival;
    show_int(ival);
    show_float(fval);
    show_pointer(pval);
}

int fun1(unsigned word) {
    return (int) ((word << 24) >> 24);
}

int fun2(unsigned word) {
    return ((int) word << 24) >> 24;
}

int main()
{
    unsigned sx = 0x00000076;
    unsigned ssx = 0x87654321;
    unsigned sssx = 0x000000C9;
    unsigned ssssx = 0xEDCBA987;

    printf("uy = %u:\t\t", sx);
    show_bytes((byte_pointer) &sx, sizeof(unsigned));
    printf("\nd=%x\n", fun1(sx));
    printf("\nd=%x\n", fun2(sx));
    
    printf("uy = %u:\t\t", ssx);
    show_bytes((byte_pointer) &ssx, sizeof(unsigned));
    printf("\nd=%x\n", fun1(ssx));
    printf("\nd=%x\n", fun2(ssx));
    
    printf("uy = %u:\t\t", sssx);
    show_bytes((byte_pointer) &sssx, sizeof(unsigned));
    printf("\nd=%x\n", fun1(sssx));
    printf("\nd=%x\n", fun2(sssx));

    printf("uy = %u:\t\t", ssssx);
    show_bytes((byte_pointer) &ssssx, sizeof(unsigned));
    

    return 0;
}