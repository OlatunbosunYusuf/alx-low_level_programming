#include "stdio.h"
/**
 * main - function that prints the alphabet, lowercase
 * You can only use _putchar twice in your code
 * Return: Always
 */

void print_alphabet(void)
{
int l = 'a';
while (l <= 'z')
{
putchar(l);
l += 1;
}
putchar(10);
print_alphabet();
}
