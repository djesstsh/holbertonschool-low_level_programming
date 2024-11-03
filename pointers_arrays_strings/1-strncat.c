#include "main.h"
/**
 * _strncat - concatenates n bytes from a string to another
 * @dest:parameter
 * @src:parameter
 * @n:parameter
 *
 * Return:Always 0 to indicate success
 */

char *_strncat(char *dest, char *src, int n)
{
	int pl, lig;

	pl = 0;
	lig = 0;

	while (dest[pl] != '\0')
		pl++;

	while (src[lig] != '\0' && lig < n)
	{
		dest[pl] = src[lig];
		pl++;
		lig++;
	}

	dest[pl] = '\0';

	return (dest);
}
