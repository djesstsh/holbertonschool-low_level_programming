#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @s:parameter
 *
 * Return:Always 0 to indicate success
 */

char *string_toupper(char *s)
{
	int pl;

	for (pl = 0; s[pl] != '\0'; pl++)
	{
		if (s[pl] >= 'a' && s[pl] <= 'z')
			s[pl] = s[pl] - 32;
	}

	return (s);
}
