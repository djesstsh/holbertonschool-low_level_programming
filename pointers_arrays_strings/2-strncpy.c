#include "main.h"
/**
 * _strncpy - copies a string
 * @dest:parameter
 * @src:parameter
 * @n:parameter
 *
 * Return:Always 0 to indicate success
 */

char *_strncpy(char *dest, char *src, int n)
{
	int pl;

	pl = 0;

	while (src[pl] != '\0' && pl < n)
	{
		dest[pl] = src[pl];
		pl++;
	}

	while (pl < n)
	{
		dest[pl] = '\0';
		pl++;
	}

	return (dest);
}
