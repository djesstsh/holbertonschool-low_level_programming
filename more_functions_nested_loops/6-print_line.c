#include "main.h"
/**
 * print_line - print line
 *
 * @n:parameter
 *
 * Return:Always 0 to indicate success
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int pl;

		for (pl = 1; pl <= n; pl++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
