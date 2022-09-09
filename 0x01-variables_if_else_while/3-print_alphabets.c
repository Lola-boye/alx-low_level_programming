#include <stdio.h>


/**
 * main - Entry point
 *
 * Description: This prints alphabets in lower and upper cases
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
	l = 'A';
	while (l <= 'Z')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
