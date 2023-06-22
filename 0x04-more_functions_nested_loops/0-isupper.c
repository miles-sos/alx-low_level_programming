/**
 * _isupper - checks for uppercase character
 * @c: passed to the function as the argument to check
 * Return: 1 if uppercase or 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
