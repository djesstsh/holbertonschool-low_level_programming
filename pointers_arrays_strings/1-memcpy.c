#include "main.h"
/**
 * *_memcpy - copies a memory area
 * @dest:parameter
 * @src:parameter
 * @n: parameter
 * Return:Always 0 to indicate success
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		src[i] = dest[i];
	}
	return (dest);
}
