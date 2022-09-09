#include <stdio.h>


/**
 * main - Entry point
 *
 * Description: This program prints lower case alphabets in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
	char k;

	k = 'a';
	while (k <= 'z')
	{
		putchar(k);
	}
	putchar('\n');
	return (0);
}
