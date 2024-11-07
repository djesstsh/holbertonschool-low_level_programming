#include "main.h"
/**
 * _print_rev_recursion - print a string in reverse
 * @s:parameter
 */

void _print_rev_recursion(char *s)
{
	int pl = 0;
	int lig;

	while (s[pl] != '\0')
	{
		pl++;
	}
	for (lig = pl - 1; lig >= 0; lig--)
	{
		_putchar(s[lig]);
	}
}
