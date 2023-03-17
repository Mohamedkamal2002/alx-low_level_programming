#include <stdio.h>

/**
 * main - This program prints the alphabet in lowercase and Uppercase
 *
 * Description: printing the alphabet using for loop
 * Return: always return 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
		putchar(alphabet);
	printf("\n");
	return (0);
}
