#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
  * check_num - check - string there are digit
  * @str: array str
  *
  * Return: Always 0 (Success)
  */
int check_num(char* str)
{
	/*Declaring variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*count string*/

	{
		if (!isdigit(str[count])) /*check if str there are digit*/
		{
			return (0);
		}

		count++;
	}
	return (1);
}


/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
if (argc < 2)
{
printf("0\n");
}
else
{
int i;
long j;
long sum;
char *p;

sum = 0;

for (i = 1; i < argc; i++)
{
if (check_num(argv[i]))
{
	j = strtol(argv[i], &p, 10);
	sum += j;

}
else
{
	printf("Error\n");
	return (0);
}
}
printf("%ld\n", sum);
}

return (0);
}

