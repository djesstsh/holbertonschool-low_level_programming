#include "main.h"
/**
 * print_diagonal - print line
 *
 * @n:parameter
 *
 * Return:Always 0 to indicate success
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int pl, lig;

		for (pl = 0; pl < n; pl++)
		{
			for (lig = 0; lig < n; lig++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
