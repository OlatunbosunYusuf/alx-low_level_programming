#include "stdio.h"
/**
*Print_alphabet- function that prints the alphabet, lowercase
*You can only use _putchar twice in your code
*Return:nothing
*/
void print_alphabet(void)
{
char ch;
ch = 'a';
while (ch <= 'z')
{
putchar (ch);
ch += 1;
}
putchar (10);
}
