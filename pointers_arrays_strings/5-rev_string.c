#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char pl;
	int lig, bun, bun1;

	bun = 0;
	bun1 = 0;

	while (s[bun] != '\0')
	{
		bun++;
	}

	bun1 = bun - 1;

	for (lig = 0; lig < bun / 2; lig++)
	{
		pl = s[lig];
		s[lig] = s[bun1];
		s[bun1--] = pl;
	}
}
