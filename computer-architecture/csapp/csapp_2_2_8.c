#include <stdio.h>

float sum_elements(float a[], unsigned length)
{
    int i;
    float result = 0;

    for (i = 0; i <= length - 1; i++)
    {
        result += a[i];
    }
    return result;
}

int main()
{
    float arr[] = { 3.0, 2.0, 1.0 };
    int len = 3;
    
    float res = sum_elements(arr, len);
    printf("result=%f\n", res);
    return 0;
}