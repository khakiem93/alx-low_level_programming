#include "main.h"
/**
 * puts2 - prints a string, followed by a new line, to stdout
 * @str: string to print
 */

void puts2(char *str)
{
	while (1 == 1)
	{
		_putchar(*str);
		if (*(str + 1) == '\0')
			break;
		str += 2;
	}
	_putchar('\n');
}
