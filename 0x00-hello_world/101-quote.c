#include <stdio.h>
/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 */
int main(void)
{
	char h[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
		fwrite(h, sizeof(h) - 1, 1, stdout);
	return (1);
}