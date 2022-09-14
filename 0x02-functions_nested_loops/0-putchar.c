#include"main.h"
/**
* Main-the entry point to the program
* local variable definition,prints _putchar followed by a new line
* Return:0
*/
int main(void)
{
int a = 0;
char text[10] = "_putchar";

for(a = 0, a < 8, a++)
{
_putchar(text[a]);
}

_putchar('\n');

return 0;

}


