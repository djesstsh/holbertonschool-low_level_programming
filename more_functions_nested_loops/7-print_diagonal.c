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
	int pl = 0;
	int lig = 0;

	if (n > 0)
	{
		while (pl < n)
		{
			while (lig < pl)
			{
				_putchar(' ');
				lig++;
			}
			pl++;
			lig = 0;
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
