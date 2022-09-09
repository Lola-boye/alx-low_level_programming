#include <stdio.h>


/**
 * main - Entry point
 *
 * Description: This prints all lower cases except q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l;

	l = 'a';
	while (l <= 'z')
	{
		if ((l != 'e') && (l != 'q'))
		{
			putchar(l);
			l++;
		}
		else
		{
			l++;
		}
	}
	putchar('\n');
	return (0);
}
