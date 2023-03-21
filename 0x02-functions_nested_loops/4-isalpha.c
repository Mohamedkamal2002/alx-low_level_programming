/**
 * _islower - check alphabet
 * @c: character passed to be checked
 *
 * Description: This function check if the paramater passed is
 *  letter using ASCII table
 * Return: return 1 if the @c is letter and 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
