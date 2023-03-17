#include <stdio.h>

/**
 * main - This program prints the alphabet in lowercase in reverse order
 *
 * Description: printing the alphabet using for loop
 * Return: always return 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
		printf("%c", alphabet);
	printf("\n");
	return (0);
}
