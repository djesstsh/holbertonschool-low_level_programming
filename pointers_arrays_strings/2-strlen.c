#include "main.h"
/**
 * _strlen - return length of a string
 *
 * @s:parameter
 *
 * Return:Always 0 to indicate success
 */

int _strlen(char *s)
{
	int string = 0;

	while (s[string] != '\0')
		string++;
	return (string);
}
