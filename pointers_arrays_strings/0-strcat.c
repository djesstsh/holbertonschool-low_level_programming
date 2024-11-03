#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest:parameter
 * @src:parameter
 *
 * Return:Always 0 to indicate success
 */

char *_strcat(char *dest, char *src)
{
	int pl, lig;

	pl = 0;
	lig = 0;

	while (dest[pl] != '\0')
		pl++;

	while (src[lig] != '\0')
	{
		dest[pl] = src[lig];
		lig++;
		pl++;
	}

	dest[pl] = '\0';

	return (dest);
}
