#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s:parameter
 */

void print_rev(char *s)
{
	int pl, lig, bun;

	pl = 0;

	while (s[pl] != '\0')
	{
		pl++;
	}

	bun = pl;

	for (lig = bun - 1; lig >= 0; lig--)
	{
		_putchar(s[lig]);
	}

	_putchar('\n');
}
