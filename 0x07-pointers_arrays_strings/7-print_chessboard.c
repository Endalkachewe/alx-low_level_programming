#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int k;
	int l;

	for (l = 0; l < 8; l++)
	{
		for (k = 0; k < 8; k++)
			_putchar(a[l][k]);
		_putchar('\n');
	}
}
