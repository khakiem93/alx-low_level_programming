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
	int lastDigit;


	if (n < 0)
		n = -n;
	lastDigit = n % 10;
	if (lastDigit < 0)
		lastDigit = -lastDigit;
	_putchar(lastDigit + '0');
	return (lastDigit);

}

