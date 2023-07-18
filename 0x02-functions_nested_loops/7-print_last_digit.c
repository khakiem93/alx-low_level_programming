#include "main.h"

/**
	 * print_last_digit - prints the sign of a number
	 * @n: the int to check
	 * Return: 1 and prints + if n is greater than zero
	 * 0 and prints 0 if n is zero
	 * -1 and prints - if n is less than zero
	 */


int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	int lastDigit = n % 10;
	_putchar(lastDigit+'0');
	return (lastDigit);

}
