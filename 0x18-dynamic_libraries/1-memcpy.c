#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: location where is stored
 *@src: location where is copied
 *@n: number of bytes
 *
 *Return: copied memory with n bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
