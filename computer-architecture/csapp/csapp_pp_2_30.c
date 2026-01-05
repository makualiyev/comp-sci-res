/*
* Practice problem 2.30
*/
#include <stdio.h>

/* Determine whether arguments can be added without overflow */
int tadd_ok(int x, int y)
{
	int sum = x + y;
	int neg_over = x < 0 && y < 0 && sum >= 0;
	int pos_over = x >= 0 && y >= 0 && sum < 0;
	return !neg_over && !pos_over;
}

int main(void)
{
	int x, y;
	printf("Enter x:\n");
	scanf("%d", &x);
	printf("Enter y:\n");
	scanf("%d", &y);
	printf("x=%d\ty=%d\nResult is %s\n", x, y, tadd_ok(x, y) == 0 ? "False": "True");
	return 0;
}
