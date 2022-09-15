#include <studio.h>


/**
 * main - Entry point
 *
 * Description: This program Prints _putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	char c;
	char s[] = "_putchar\n";

	while (i <= 9)
	{
		c = s[i];
		_putchar(c);
		i++;
	}
	return (0);
}
