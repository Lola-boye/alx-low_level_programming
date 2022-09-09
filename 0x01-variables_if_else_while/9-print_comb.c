#include <stdio.h>
#include <time.h>
#include <stdlib.h>


/**
 * main - Entry point
 *
 * Description: This program prints all possible combi of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
			i++;
		}
		else
		{
			i++;
		}
	}
		putchar('\n');
		return (0);
}
