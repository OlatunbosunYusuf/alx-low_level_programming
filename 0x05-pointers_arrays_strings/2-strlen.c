#include"main.h"
/**
 * _strlen -returns the length of a string 
 * @s: String to count
 *
 * Return: String length
 */
int _strlen(char *s)
{
int c = 0;i

for (; *s != '\0'; s++)
{
c++;
}
return (c);
}
