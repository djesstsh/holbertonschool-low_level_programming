#include "main.h"
#include <stddef.h>
/**
 * *_strpbrk - search a string for any of a set of bytes
 * @s:parameter
 * @accept:parameter
 * Return:Always 0 to indicate success
 */

char *_strpbrk(char *s, char *accept)
{
	int pl, lig;

	for (pl = 0; s[pl] != '\0'; pl++)
	{
		for (lig = 0; accept[lig]; lig++)
		{
			if (s[pl] == accept[lig])
			{
				return (&s[pl]);
			}
		}
	}
	return (NULL);
}
