#include "main.h"
/**
 * _strcat - Concatenates two strings
 * @dest: Destination
 * @src: source
 *
 * @n: Amount of bytes used from src
 * Return: The pointer to dest
 */
char *_strcat(char *dest, char *src, int n)
{
int i;
int j;
i = 0;

while (dest[i] != '\0')
{
i++;i
}
j = 0;
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
