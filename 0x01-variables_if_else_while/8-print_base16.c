#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int (c);
	for (c = 0; c < 10; ++c)
		putchar(c + '0');
	{
		char (b);
			for (b = 'a'; b <= 'f'; ++b)
				putchar(b);
	}
	putchar('\n');
	return (0);

}
