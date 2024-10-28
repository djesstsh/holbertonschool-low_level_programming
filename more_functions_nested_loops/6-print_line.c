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
	int pl = 0;

	if (n > 0)
	{
		while (pl <= n)
		{
			_putchar('_');
			pl++;
		}
	 _putchar('\n');
	}
	else
	_putchar('\n');
}
