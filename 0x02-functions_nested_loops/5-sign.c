#include "main.h"
/**
*print_sign-prints sign of a number
*@n: character to be verified
*Return: return 0 or 1
*/
int print_sign(int n)
{
if (n == 0)
{
_putchar('0');
return (0);
}
else if (n > 0)
{
_putchar('+');
return (1);
}
else
{
_putchar('-');
return (-1);
}
}
/**_isalpha - controls if a character is alphabetical
*@x: character to be verified
*Return: return 0 or 1
*/
int _isalpha(int x)
{
if ((x >= 65 && x <= 90) || (x >= 97 && x <= 122))
return (1);

return (0);
}
