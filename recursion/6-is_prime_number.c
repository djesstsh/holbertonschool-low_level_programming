#include "main.h"
/**
 * is_prime_number - return integer prime number
 * @n:parameter
 * Return:Always 0 to indicate success
 */

int is_prime_number(int n)
{
	int pl;

	if (n <= 1)
		return (0);
	for (pl = 2; pl * pl <= n; pl++)
	{
		if (n % pl == 0)
			return (0);
	}
	return (1);
}
