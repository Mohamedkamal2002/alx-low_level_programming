/**
 * _islower - check lowercase alphabet
 * @c: character passed to be checked
 *
 * Description: This function check if the character passed is in lowercase
 * or not using ASCII code
 * Return: return 1 if the @c is lowercase character and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
