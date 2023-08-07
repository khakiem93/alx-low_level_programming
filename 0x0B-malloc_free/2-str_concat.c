#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */


char *str_concat(char *s1, char *s2)
{
char *dest;
int i;
int j;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

i = 0;
while (s1[i] != '\0')
{
i++;
}
j = 0;
while (s2[j] != '\0')
{
j++;
}
dest = malloc((sizeof(char) * (i + j)) +1);
if (dest == NULL)
{
return (NULL);
}
i = 0;
while (s1[i] != '\0')
{
dest[i] = s1[i];
i++;
}
j = 0;
while (s2[j] != '\0')
{
dest[i + j] = s2[j];
j++;
}
dest[i + j] = '\0';
return (dest);
}
