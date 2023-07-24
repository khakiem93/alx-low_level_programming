#include "main.h"
/**
 * rev_string - prints a string, followed by a new line, to stdout
 * @s: string to print
 */

void rev_string(char *s)
{
	int longi = 0;
	int x;
	char rev;

	while (s[longi] != '\0')
	{
		longi++;
	}

	for (x = 0; x < longi; x++)
	{
		longi--;
		rev = s[longi];
		s[longi] = s[x];
		s[x] = rev;
	}
}
