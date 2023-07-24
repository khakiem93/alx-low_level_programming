#include "main.h"
/**
 * print_rev - prints a string, followed by a new line, to stdout
 * @s: string to print
 */

void print_rev(char *s)
{
	int longi = 0;
	int x;

	while (*s != '\0')
	{
		s++;
		longi++;
	}
	s--;
	for (x = longi; x > 0; x--)
	{
		_putchar(*s--);
	}
	_putchar('\n');
}
