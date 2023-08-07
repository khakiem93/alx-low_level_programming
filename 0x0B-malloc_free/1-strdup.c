#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
char *str2;
int x, y = 0;
if (str == NULL)
return (NULL);
x = 0;
while (str[x] != '\0')
x++;
str2 = malloc((sizeof(char) * x)+1);
if (str2 == NULL)
return (NULL);
while (str[y] != '\0')
{
str2[y] = str[y];
y++;
}
str2[y] = '\0';
return (str2);

}
