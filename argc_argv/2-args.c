#include <stdio.h>
/**
 * main - Entry point
 * @argc:parameter
 * @argv:parameter
 * Return:Always 0 to indicate
 */

int main(int argc, char **argv)
{
	int pl;

	if (argc > 0)
	{
		for (pl = 0; pl < argc; pl++)
		{
			printf("%s\n", argv[pl]);
		}
	}
	return (0);
}
