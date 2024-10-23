#include <stdio.h>
/**
 * main - Entry point
 *
 * Return:Always 0 to indicate success
 */

int main(void)
{
	char tab;

	for (tab = 'z' ; tab >= 'a' ; tab--)
	{
		putchar(tab);
	}

	putchar('\n');
	return (0);
}
