#include "main.h"
/**
 * print_numbers - prints numbers from 0 to 9
 *
 * Return:ALways 0 to indicate success
 */

void print_numbers(void)
{
	char c;

	for (c = 0; c < 10; c++)
	{
		_putchar(c + '0');
	}
	_putchar('\n');
}