#include "main.h"
/**
 * print_most_numbers - prints numbers from 0 to 9
 *
 * Return:Always 0 to indicate success
 */

void print_most_numbers(void)
{
	char c;

	for (c = 0; c < 10; c++)
	{
		if ((c == 2 || c == 4) != 1)
		{
			_putchar(c + '0');
		}
	}
	_putchar('\n');
}
