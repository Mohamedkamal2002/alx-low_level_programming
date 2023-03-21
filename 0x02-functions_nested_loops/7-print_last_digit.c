/**
 * print_last_digit - return the last decimal digit
 * @n: the whole number
 *
 * Description:~
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int r;

	r = n % 10;
	return (r + 10 * r);
}
