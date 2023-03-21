#include<stdio.h>
/*This program prints alphabets in lowercases 10 times.*/

void print_alphabet_x10(void); /*prototyping*/

/**
 * main -  calls print_alphabet_x10 function.
 * 
 * Description: calls print_alphabet_x10 function.
 * Return: Always  return 0
 */
int main(viod)
{
	print_alphabet_x10(); /*function call*/
	return 0;
}

/**
 * print_alphabet_x10 - This function prints alphabet in lowercase 10 times.
 *
 * Description: ~
 * Return : Always return 0
 */

void print_alphabet_x10(void)
{
	char s;
	char i;

	for (i = 0 ; i < 10 ; i++)
		for (s = 'a' ; s <= 'z' ; s++ )
			printf("%c",s);
}
