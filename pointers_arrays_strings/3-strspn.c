#include "main.h"
#include <string.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s:parameter
 * @accept:parameter
 * Return:Always 0 to indicate success
 */

unsigned int _strspn(char *s, char *accept)
{
	int pl;

	pl = strspn(s, accept);

	return (pl);
}
