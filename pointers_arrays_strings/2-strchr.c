#include "main.h"
#include <string.h>
/**
 * *_strchr - locates a character in a string
 * @s:parameter
 * @c:parameter
 * Return:Always 0 to indicate success
 */

char *_strchr(char *s, char c)
{
	char *pl;

	pl = strchr(s, c);

	if (pl != NULL)
		return (pl);
	else
		return (NULL);
}
