#include "main.h"
/**
 * _strcpy - copies the string pointed to  by src
 *
 * @dest:parameter
 * @src:parameter
 * Return:return 0 to indicate success
 */

char _strcpy(char *dest, char *src)
{
	int pl, lig;

	pl = 0;

	while (src[pl] != '\0')
	{
		pl++;
	}

	for (lig = 0; lig < pl; lig++)
	{
		dest[lig] = src[lig];
	}
	dest[lig] = '\0';

	return (dest);
}
