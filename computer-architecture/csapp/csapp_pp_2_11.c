/**
 * Practice Problem 2.11
 */
#include <stdio.h>

void inplace_swap(int *x, int *y)
{
    *y = *x ^ *y;   /* Step 1 */
    *x = *x ^ *y;   /* Step 2 */
    *y = *x ^ *y;   /* Step 3 */
}

void reverse_array(int a[], int cnt)
{
    int first, last;
    for (first = 0, last = cnt - 1; first < last; first++, last--) {
        inplace_swap(&a[first], &a[last]);
    }
}

int main()
{
    // int arr[] = { 1,2,3,4,5 };
    // int counter = 5;
    int arr[] = { 1,2,3,4,5,6 };
    int counter = 6;

    for (int i = 0; i < counter; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\nswapped:\n");
    
    reverse_array(arr, counter);

    for (int i = 0; i < counter; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    return 0;
}