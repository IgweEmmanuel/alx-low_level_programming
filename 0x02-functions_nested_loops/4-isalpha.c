#include "main.h"
/**
*_isalpha - controls if a character is alphabetical
*@x: character to be verified
*Return: return 0 or 1
*/
int _isalpha(int x)
{
if ((x >= 65 && x <= 90) || (x >= 97 && x <= 122))
return (1);

return (0);
}
