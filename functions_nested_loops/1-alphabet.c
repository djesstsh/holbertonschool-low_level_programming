#include "main.h"
/**
 * main - Entry point
 *
 * Return:Always 0 to indicate success
 */

void print_alphabet(void)
{
	char al = 'a';
	for (al = 'a', al <= 'z', al++;)
	{
		_putchar(al);
	}
	_putchar('\n');
}
