#include "main.h"
/**
 * print_square - print a square
 * @size:parameter
 */

void print_square(int size)
{
	if (size > 0)
	{
		int pl, lig;

		for (pl = 0; pl < size; pl++)
		{
			for (lig = 0; lig < size; lig++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
