#include "main.h"
/**
* _puts - Custom function to print a string to the standard output.
* @str: The string to be printed.
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar (*str);
		str++;
	}
}
