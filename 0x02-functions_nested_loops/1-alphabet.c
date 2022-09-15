#include "stdio.h"
/**
*Print_alphabet- function that prints the alphabet, lowercase
*You can only use _putchar twice in your code
*Return:nothing
*/
void print_alphabet(void)
{
clrscr();

int ch;
for (ch= 'a'; ch<= 'z'; ch++)

putchar (ch);

putchar ('\n');
}
