#include "main.h"
/**
 * _isdigit - Check a digit
 *
 * @c:parameter
 *
 * Return:Always 0 to indicate success
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
