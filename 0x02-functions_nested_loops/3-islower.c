#include "main.h"

/**
 * _islower - shows 1 if input is a
 * @c: The character in ASCI code
 * Return: 1 for lower case character 0 for the rest
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
