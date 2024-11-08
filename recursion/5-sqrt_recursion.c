#include "main.h"
/**
 * helper_sqrt - successive test of values
 * @n:parameter
 * @pl:parameter
 * Return:Always 0 to indicate success
 */

int helper_sqrt(int n, int pl)
{
	if (pl * pl == n)
		return (pl);
	if (pl * pl > n)
		return (-1);
	return (helper_sqrt(n, pl + 1));
}

/**
 * _sqrt_recursion - retunrs the natural square root of a number
 * @n:parameter
 * Return:Always 0 to indicate success
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (helper_sqrt(n, 0));
}
