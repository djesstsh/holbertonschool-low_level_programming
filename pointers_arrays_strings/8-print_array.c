#include <stdio.h>
#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * 
 * @a:parameter
 * @n:parameter
 */

void print_array(int *a, int n)
{
	int pl;

	for (pl = 0; pl < n; pl++)
	{
		if (pl == 0)
			printf("%d", a[pl]);
		else
			printf(", %d", a[pl]);
	}
		printf("\n");
}
