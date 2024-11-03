#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s:parameter
 *
 * Return:return 0 to indicate success
 */

int _atoi(char *s)
{
	int pl, lig, bun, ser, ere, mls;

	pl = 0;
	lig = 0;
	bun = 0;
	ser = 0;
	ere = 0;
	mls = 0;

	while (s[ser] != '\0')
		ser++;

	while (pl < ser && ere == 0)
	{
		if (s[pl] == '-')
			++lig;

		if (s[pl] >= '0' && s[pl] <= '9')
		{
			mls = s[pl] - '0';
			if (lig % 2)
				mls = -mls;
			bun = bun * 10 + mls;
			ere = 1;
			if (s[pl + 1] < '0' || s[pl + 1] > '9')
				break;
			ere = 0;
		}
		pl++;
	}

	if (ere == 0)
		return (0);

	return (bun);
}
