#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s:parameter
 * @accept:parameter
 * Return:Always 0 to indicate success
 */

unsigned int _strspn(char *s, char *accept)
{
	int pl, lig, bun;

	for (pl = 0; s[pl] != ('\0'); pl++)
	{
		for (lig = 0; accept[lig] != ('\0'); lig++)
		{
			if (s[pl] == accept[lig])
			{
				bun++;
				break;
			}
			else if ((accept[lig + 1]) == '\0')
				return (bun);
		}
	}
	return (bun);
}
