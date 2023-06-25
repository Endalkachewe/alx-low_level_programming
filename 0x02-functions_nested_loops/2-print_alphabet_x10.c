#include "main.h"
/**
 * print_alphabet_x10 - make alphabet _x10
 * Return: void
 */
void print_alphabet_x10(void)
{
	char;

	int i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
