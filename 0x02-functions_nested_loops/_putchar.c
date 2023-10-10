/**
 * _putchar - char function
 *
 * Return: character
 */
int _putchar(int ch)
{
	/*local variable declaration*/
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
	{
		return ch;
	}else
	{
		return (0);
	}
}

