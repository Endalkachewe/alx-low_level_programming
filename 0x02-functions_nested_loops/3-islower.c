#include "main.h"

/**
 * 3-islower.c - shows 1 if input is a
 * Return: 1for lower cases
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
