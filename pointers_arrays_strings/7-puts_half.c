#include "main.h"
/**
 * puts_half - print half of a string
 * @str:parameter
 */

void puts_half(char *str)
{
	int pl, lig, bun;

	pl = 0;

	while (str[pl] != '\n')
	{
		pl++;
	}

	if (pl % 2 == 0)
	{
		for (bun = pl / 2; str[bun] != '\0'; bun++)
		{
			_putchar(str[bun]);
		}
	}
	else if (pl % 2)
	{
		for (lig = (pl - 1) / 2; lig < pl - 1; lig++)
		{
			_putchar(str[lig + 1]);
		}
	}
	_putchar('\n');
}
