#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints numbers from 0 to 98
 *
 * @n:parameter
 *
 * Return:Always 0 to indicate success
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}

	else
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
}
