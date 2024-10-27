#include "main.h"
/**
 * _isalpha - check alphabetic character
 *
 * @c:parameter
 *
 * Return:Always 0 to indicate success
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
