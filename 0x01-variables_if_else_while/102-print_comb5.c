#include <stdio.h>
#include <time.h>
#include <stdlib.h>


/**
 * main - Entry point
 *
 * Description: This prints all possible combi of 2 2-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int k;
	int l;

	while (i < 58)
	{
		putchar(i); 
		putchar(j); 
		putchar(k);
		putchar(l);
		if ((i == 57) && (j == 56) && (k == 57) && (l == 57))
		{
			putchar('\n'); i++;
		}
		else
		{
			putchar(44); 
			putchar(32);
			if ((k == 57) && (i == 57))
			{
				if (j < 56)
				{
					l = ++j + 1; k = i;
				}
				else if (j == 56)
				{
					j++; k = i + 1; l = 48;
				}
				else if (j == 57)
				{
					j = 48;	i = 49; k = ++i;
				}
			}
			else if (l < 57)
			{
				l++;
			}
			else
			{
				l = 48; k++;
			}
		}
	}
	return (0);
}
