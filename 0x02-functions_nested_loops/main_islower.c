#include <stdio.h>
int _islower(int c);
int main(void)
{
int c;
printf("Enter a character: ");
scanf("%c", &c);
if (_islower(c))
{
printf("%c is a lowercase letter.\n", c);
}
else
{
printf("%c is not a lowercase letter.\n", c);
}
return 0;
}
