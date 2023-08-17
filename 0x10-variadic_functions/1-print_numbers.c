#include "variadic_functions.h"
/**
 * print_numbers - print the passed number
 * @separator: the separator between numbers
 * @n: the number of all arguments
 * @...: passed numbers
 * 
 * Description: print the passed number
 * Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i != (n - 1))
		printf("%s", separator);
	}
	va_end(args);
}
