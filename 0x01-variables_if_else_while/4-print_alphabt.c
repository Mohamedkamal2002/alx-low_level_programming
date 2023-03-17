#include <stdio.h>

/**
 * main - This program prints the alphabet in lower case without eq char.
 *
 * Description: printing the alphabet using for loop
 * Return: always return 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		if (alphabet != 'e' && alphabet != 'q')
			putchar(alphabet);
	printf("\n");
	return (0);
}
