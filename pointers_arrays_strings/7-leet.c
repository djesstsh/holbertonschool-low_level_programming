#include "main.h"

/**
 * leet - encodes a string in 1337
 * @s:parameter
 *
 * Return:Always 0 to indicate success
 */
char *leet(char *s)
{
	int pl, lig;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (pl = 0; s[pl] != '\0'; pl++)
	{
		for (lig = 0; lig < 10; lig++)
		{
			if (s[pl] == a[lig])
			{
				s[pl] = b[lig];
			}
		}
	}

	return (s);
}
