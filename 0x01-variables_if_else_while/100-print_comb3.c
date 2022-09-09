#include <stdio.h>
#include <time.h>
#include <stdlib.h>


/**
 * main - Entry point
 *
 * Description: Prints all possible combi of two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	a = 48;
	b = 49;
	while ((a < 57) && (b < 58))
	{
		putchar(a);
		putchar(b);
		if ((a == 56) && (b == 57))
		{
			putchar('\n');
			a++;
			b++;
		}
		else
		{
			putchar(44);
			putchar(32);
			if (b < 57)
			{
				b++;
			}
			else
			{
				a++;
				b = a + 1;
			}
		}
	}
	return (0);
}
