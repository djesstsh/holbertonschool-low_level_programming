#include "main.h"
/**
 * puts2 - prints one char out of 2 of a string
 *
 * @str:parameter
 */

void puts2(char *str)
{
	int lig, pl;

	lig = 0;

	while (str[lig] != '\0')
	{
		lig++;
	}

	for (pl = 0; pl < lig; pl += 2)
	{
		_putchar(str[pl]);
	}

	_putchar('\n');
}
