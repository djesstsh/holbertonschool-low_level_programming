#include <stdio.h>
/**
 * main - Entry point
 *
 * Return:Always 0 to indicate success
 */

int main(void)
{
	int num;

	for (num = 0 ; num < 10 ; num++)
	{
		putchar (num + '0');
	}
	putchar ('\n');
	return (0);
}
