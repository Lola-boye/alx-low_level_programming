#include <stdio.h>
#include <time.h>
#include <stdlib.h>


/**
 * main - Entry point
 *
 * Description: This prints all base ten digits starting with 0
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	a = 10;
	while (a < 20)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
