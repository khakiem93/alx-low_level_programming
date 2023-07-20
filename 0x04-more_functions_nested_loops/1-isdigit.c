#include "main.h"


/**
 * _isdigit - check if char is digit
 * @c: is the char to be checked
 * Return: 1 if char is digit, otherwise 0.
 */


int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
