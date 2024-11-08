#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc:parameter
 * @argv:parameter
 * Return:Always 0 to indicate success
 */

int main(int argc, char **argv)
{
	int pl, lig;

	lig = 0;
	if (argc != 3)
	{
		printf("%s\n", "Error");
		lig = 1;
	}
	else
	{
		pl = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", pl);
	}
	return (lig);
}
