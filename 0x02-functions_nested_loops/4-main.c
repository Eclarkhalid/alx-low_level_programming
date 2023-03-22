#include "main.h"
int main(void)
{
int r;
r = _isalpha('H');
if (r == 1)
_putchar('H');
r = _isalpha('o');
if (r == 1)
_putchar('o');
r = _isalpha('3');
if (r == 1)
_putchar('3');
_putchar('\n');
return (0);
}
