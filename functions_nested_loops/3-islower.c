#include "main.h"
/**
 * _islower - Check lowercase
 *
 * Return:Always 0 to indicate success
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
