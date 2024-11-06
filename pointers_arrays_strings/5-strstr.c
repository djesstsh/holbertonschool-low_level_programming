#include "main.h"
#include <stddef.h>
/**
 * *_strstr - locate a substring
 * @haystack:parameter
 * @needle:parameter
 * Return:Always 0 to indicate success
 */

char *_strstr(char *haystack, char *needle)
{
	int pl, lig;

	if (needle[0] == '\0')
	{
		return (haystack);
	}

	for (pl = 0; haystack[pl] != '\0'; pl++)
	{
		for (lig = 0; needle[lig] != '\0'; lig++)
		{
			if (haystack[pl + lig] != needle[lig])
			{
				break;
			}
		}
			if (needle[lig] == '\0')
			{
				return (&haystack[pl]);
			}
	}
	return (NULL);
}
