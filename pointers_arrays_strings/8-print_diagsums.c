#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print sum of two diagonals
 * @a:parameter
 * @size:parameter
 * Return:Always 0 to indicate success
 */

void print_diagsums(int *a, int size)
{
	int pl, lig = 0, bun = 0;

	for (pl = 0; pl < size; pl++)
	{
		lig += a[pl];
		a += size;
	}

	a -= size;

	for (pl = 0; pl < size; pl++)
	{
		bun += a[pl];
		a -= size;
	}

	printf("%d, %d\n", lig, bun);
}
