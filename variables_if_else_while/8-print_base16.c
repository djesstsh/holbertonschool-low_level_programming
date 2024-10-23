#include <stdio.h>
/**
 * main - Entry point
 *
 * Return:Always 0 to indicate success
 */

int main(void)
{
	{
		int nb;

		for (nb = 0 ; nb < 10 ; nb++)
		{
			putchar(nb + '0');
		}
	}
	{
		char lt;

		for (lt = 'a' ; lt <= 'f' ; lt++)
		{
			putchar(lt);
		}
	}
	putchar('\n');
	return (0);
}
