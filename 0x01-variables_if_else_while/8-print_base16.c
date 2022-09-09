#include <stdio.h>
#include <time.h>
#include <stdlib.h>


/**
 * main - Entry point
 *
 * Description: This prints all base 16 numbers in lower case
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	char j;

	i = 48;
	while (i < 58)
	{
		putchar(i);
		i++;
	}

	j = 'a';
	while (j <= 'f')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
