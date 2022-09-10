#include <stdio.h>
#include <time.h>
#include <stdlib.h>


/**
 * main - Entry point
 *
 * Description: This prints possible combi of 3-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int k;

	i = 48;
	j = 49;
	k = 50;
	while ((i < 56) && (j < 57) && (k < 58))
	{
		putchar(i);
		putchar(j);
		putchar(k);
		if ((i == 55) && (j == 56) && (k == 57))
		{
			putchar('\n');
			i++;
			j++;
			k++;
		}
		else
		{
			putchar(44);
			putchar(32);
			if (k < 57)
			{
				k++;
			}
			else if ((j < 56) && (k == 57))
			{
				k = ++j + 1;
			}
			else
			{
				j = ++i + 1;
				k = j + 1;
			}
		}
	}
	return (0);
}
