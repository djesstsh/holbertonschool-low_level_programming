#include "main.h"
/**
 * more_numbers - prints 10 times numbers from 0 to 14
 *
 * Return:Always 0 to indicate success
 */

void more_numbers(void)
{
	char c;
	int C;

	for (C = 0; C < 10; C++)
	{
		for (c = 0; c < 15; c++)
		{
			if (c > 9)
				_putchar(c / 10 + '0');
			_putchar(c % 10 + '0');
		}
	_putchar('\n');
	}
}
