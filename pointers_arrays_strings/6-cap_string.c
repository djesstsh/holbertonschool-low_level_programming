#include "main.h"
/**
 * cap_string - capitalizes everey word of a string
 * @s:parameter
 *
 * Return:Always 0 to indicate success
 */

char *cap_string(char *s)
{
	int pl, lig;

	char spe[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (pl = 0; s[pl] != '\0'; pl++)
	{
		if (pl == 0 && s[pl] >= 'a' && s[pl] <= 'z')
			s[pl] -= 32;

		for (lig = 0; lig < 13; lig++)
		{
			if (s[pl] == spe[lig])
			{
				if (s[pl + 1] >= 'a' && s[pl + 1] <= 'z')
				{
					s[pl + 1] -= 32;
				}
			}
		}
	}

	return (s);
}
