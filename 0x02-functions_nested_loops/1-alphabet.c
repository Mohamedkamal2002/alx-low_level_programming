#include<stdio.h>
/*This program prints alphabets in lowercases.*/

void print_alphabet(void); /*prototyping*/

/**
 * main -  calls print_alphabet function.
 * 
 * Description: calls print_alphabet function.
 * Return: Always  return 0
 */
int main(viod)
{
	print_alphabet(); /*function call*/
	return 0;
}

/**
 * print_alphabet - This function prints alphabet in lowercase.
 *
 * Description: ~
 * Return : Always return 0
 */

void print_alphabet(void)
{
	char s;

	for (s = 'a' ; s <= 'z' ; s++ )
		printf("%c",s);
}
