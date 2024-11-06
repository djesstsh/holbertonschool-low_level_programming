#include "main.h"
/**
 * print_chessboard - print the chessboard
 * @a:parameter
 * Return:Always 0 to indicate success
 */

void print_chessboard(char (*a)[8])
{
	int pl, lig;

	for (pl = 0; pl < 8; pl++)
	{
		for (lig = 0; lig < 8; lig++)
		{
			_putchar(a[pl][lig]);
		}
		_putchar('\n');
	}
}
