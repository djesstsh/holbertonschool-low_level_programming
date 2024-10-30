#include "main.h"
/**
 * print_triangle - print a triangle
 *
 * @size:parameter
 */

void print_triangle(int size)
{
	int pl, lig;
	int bun;

	if (size > 0)
	{
		for (pl = 0; pl < size; pl++)
		{
			bun = size - pl - 1;
			for (lig = 0; lig < size; lig++)
			{
				if (bun > lig)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
