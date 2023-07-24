#include "main.h"
/**
 * swap_int- a function that takes a pointer to an int as parameter
 * @a: input
 * @b: input
 * Return: void
 */
void swap_int(int *a, int *b)
{
int x;

x = *a;
*a = *b;
*b = x;
}
