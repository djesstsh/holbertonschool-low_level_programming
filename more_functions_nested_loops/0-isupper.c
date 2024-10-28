#include "main.h"
/**
 * _isupper - Check uppercase character
 *
 * @c:parameter
 *
 * Return:Always 0 to indicate success
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
