#include <stdio.h>
/**
 * main - Entry point
 * @argc:parameter
 * @argv:parameter
 * Return: Always 0 to indicate success
 */

int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
