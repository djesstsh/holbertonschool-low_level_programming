#include "main.h"
/**
 * main - Entry point
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
