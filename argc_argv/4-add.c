#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc:parameter
 * @argv:parameter
 * Return:Always 0 to indicate success
 */

int main(int argc, char *argv[])
{
	int i, j, result;

	result = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] >= '0' && argv[i][j] <= '9')
				{
					continue;
				} else
				{
					printf("Error\n");
					return (1);
				}
			}
			result += atoi(argv[i]);
		}
		printf("%d\n", result);
	} else
		printf("0\n");
	return (0);
}
