#include "main.h"
/**
 * more_numbers-prints 10 times the numbers from 0 to 14 followed by new-line.
 */


void more_numbers(void)
{

	int n;
	int z;

	for (n = 0; n < 10; n++)
	{
		for (z = 0; z < 15; z++)
		{
			if (z > 9)
			{

				_putchar('1');
			}
			_putchar('0' + z % 10);

		}
		_putchar('\n');
	}
}
