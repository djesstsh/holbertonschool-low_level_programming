#include "main.h"
/**
 * _abs - Computes absolue value
 *
 * @abs:parameter
 *
 * Return:Always 0 to indicate success
 */

int _abs(int abs)
{
	if (abs < 0)
	{
		return (-abs);
	}
	else
	{
		return (abs);
	}
}
