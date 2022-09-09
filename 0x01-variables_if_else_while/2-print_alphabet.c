#include <stdio.h>


/**
 * main - Entry point
 *
 * Description: This prints alphabets in lower case
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l;

	l = 'a';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
