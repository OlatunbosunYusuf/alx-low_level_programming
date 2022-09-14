#include"main.h"
/**
* Main-the entry point to the program
* local variable definition,prints _putchar followed by a new line
* Reture: 0
*/
int main(void)
{
	char text[10] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
{
_putchar(text[i]);
}
putchar('\n');

return (0);
}


