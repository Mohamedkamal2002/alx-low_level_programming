#include <stdio.h>

/**
 * main - This program prints the alphabet in lower case
 *
 * Description: printing the alphabet using for loop
 * Return: always return 0
 */
int main(void)
{
	char alphabet;

	for(alphabet = 'a'; alphabet <= 'z'; alphabet++)
		printf("%c", alphabet);
	return (0);
}
