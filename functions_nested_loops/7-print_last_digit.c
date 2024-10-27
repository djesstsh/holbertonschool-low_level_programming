#include "main.h"
/**
 * print_last_digit - Print the last digit
 *
 * @p:parameter
 *
 * Return:Always 0 to indicate success
 */

int print_last_digit(int p)
{
	int l = p % 10;

	if (l < 0)
	{
		l = -l;
	}

	_putchar(l + '0');
	return (l);
}
