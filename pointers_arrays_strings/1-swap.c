#include "main.h"
/**
 * swap_int - Swape value of integers
 *
 * @a:parameter
 *
 * @b:parameter
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
