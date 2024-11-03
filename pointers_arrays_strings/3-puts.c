#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string
 * @str:parameter
 */

void _puts(char *str)
{
	int pl;

	for (pl = 0; str[pl] != '\0'; pl++)
	{
		_putchar(str[pl]);
	}
	_putchar('\n');
}
