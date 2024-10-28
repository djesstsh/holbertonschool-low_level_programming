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
	int pl;

	if (n > 0)
	{
		for (pl = 0; pl <= n; pl++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
