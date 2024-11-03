#include "main.h"
/**
 * reverse_array - reverses an array of integers
 * @a:parameter
 * @n:parameter
 */

void reverse_array(int *a, int n)
{
	int pl, lig, bun;

	lig = n - 1;

	for (pl = 0; pl < n / 2; pl++)
	{
		bun = a[pl];
		a[pl] = a[lig];
		a[lig--] = bun;
	}
}
