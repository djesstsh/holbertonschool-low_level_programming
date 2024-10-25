#include "main.h"
/**
 * print_alphabet  - Entry point
 *
 * Return:Always 0 to indicate success
 */

void print_alphabet(void)
{
	char al = 'a';

	while (al <= 'z')
	{
		_putchar(al);
		al++;
	}
	_putchar('\n');
}
