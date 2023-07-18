#include "main.h"

/**
 * main - print _putchar
 * is written by mbah
 * Return: 0
 */

int main(void)
{
	char x[] = "_putchar";
	for (int i = 0; i < 8; i++)
	{
		_putchar(x[i]);
	}
	_putchar('\n');
	return 0;
}
