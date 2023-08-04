#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
if (argc < 3)
{
printf("Error\n");
}
else
{
long i;
long j;

i = strtol(argv[1], NULL, 10);
j = strtol(argv[2], NULL, 10);
printf("%ld\n", i *j);
}

return (0);
}

