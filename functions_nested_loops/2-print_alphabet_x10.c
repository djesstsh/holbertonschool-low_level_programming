#include "main.h"
/**
 * print_alphabet_x10  - Entry point
 *
 * Return:Always 0 to indicate success
 */

void print_alphabet_x10(void)
{
	int pl;
	char al;

	for (pl = 0 ; pl < 10 ; pl++)
	{
		al = 'a';

		while (al <= 'z')
		{
			_putchar(al);
			al++;
		}
		_putchar('\n');
	}
}
