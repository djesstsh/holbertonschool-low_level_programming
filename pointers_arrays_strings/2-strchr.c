#include "main.h"
#include <stddef.h>
/**
 * *_strchr - locates a character in a string
 * @s:parameter
 * @c:parameter
 * Return:Always 0 to indicate success
 */

char *_strchr(char *s, char c)
{
	int pl;

	for (pl = 0; (s[pl] != c) && (s[pl] != '\0'); pl++)
		;
	if (s[pl] == c)
		return (s + 1);
	else
		return (NULL);
}
