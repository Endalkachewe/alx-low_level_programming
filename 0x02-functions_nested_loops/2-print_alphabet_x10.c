#include "main.h"
/**
 * print_alphabet_x10 - make alphabet _x10
 * Return: void
 */
void print_alphabet_x10()
{
	int i;
	int j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
