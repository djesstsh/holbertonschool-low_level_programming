#include <stdio.h>
/**
 * main - Entry point
 *
 * Return:Always 0 to indicate success
 */

int main(void)
{
	char alphabt;

	for (alphabt = 'a'; alphabt <= 'z'; alphabt++)
	{
		if ((alphabt == 'q' || alphabt == 'e') != 1)
		{
			putchar(alphabt);
		}
	}

	putchar('\n');
	return (0);
}
