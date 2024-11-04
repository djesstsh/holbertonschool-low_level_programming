#include "main.h"
/**
 * *_memset - fills memory with a constant byte
 * @s:parameter
 * @b:parameter
 * @n:parameter
 * Return:Always 0 to indicate success
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
