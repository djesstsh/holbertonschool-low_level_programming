#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return:Always 0 to indicate success
 */

int main(void)
{
	int pl;

	for (pl = 1; pl <= 100; pl++)
	{
		if (pl % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (pl % 5 == 0)
		{
			if (pl == 100)
			{
				printf("Buzz");
			}
			else
				printf("Buzz ");
		}
		else if (pl % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", pl);
		}
	}
	putchar('\n');

	return (0);
}
